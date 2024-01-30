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

- (BOOL)isCanceled;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
