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

- (void)addEntry:(id)a0;
- (void)debugWithFormat:(const char *)a0;
- (void).cxx_destruct;
- (void)infoWithFormat:(const char *)a0;
- (id)init;
- (void)errorWithFormat:(const char *)a0;
- (void)getDebugInfoDictionariesWithCompletionHandler:(id /* block */)a0;
- (void)addAsynchronousData:(id /* block */)a0;

@end
