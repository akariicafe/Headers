@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _UIKeyboardArbiterDebug : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _importantCount;
    NSMutableArray *_entries;
    BOOL _disable;
}

@property (nonatomic) BOOL pause;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)addAsynchronousData:(id /* block */)a0;
- (void)debugWithFormat:(const char *)a0;
- (void)getDebugInfoDictionariesWithCompletionHandler:(id /* block */)a0;
- (void)errorWithFormat:(const char *)a0;
- (void)infoWithFormat:(const char *)a0;
- (void)addEntry:(id)a0;

@end
