@class NSString, PFAsyncDispatchMulticaster, NSObject;
@protocol OS_dispatch_queue, PFCancelerObserverMulticaster;

@interface PFCanceler : NSObject <PFCanceler> {
    NSObject<OS_dispatch_queue> *_serializer;
    BOOL _isCanceled;
    PFAsyncDispatchMulticaster<PFCancelerObserverMulticaster> *_multicaster;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsNotifyOnCancel;

- (void)cancel;
- (BOOL)isCanceled;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;

@end
