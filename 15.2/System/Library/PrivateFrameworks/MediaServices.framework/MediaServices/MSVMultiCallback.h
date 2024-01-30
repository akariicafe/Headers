@class NSArray, MSVCallback, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface MSVMultiCallback : NSObject {
    NSMutableArray *_callbacks;
    MSVCallback *_firstCallback;
    MSVCallback *_lastCallback;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *callbacks;
@property (retain, nonatomic) MSVCallback *firstCallback;
@property (retain, nonatomic) MSVCallback *lastCallback;

- (void)addCallback:(id)a0;
- (void)invoke;
- (void).cxx_destruct;
- (id)init;
- (void)invokeWithObject:(id)a0;
- (BOOL)removeCallback:(id)a0;

@end
