@class NSString, CMFallDetectionManagerInternal;
@protocol CMFallDetectionDelegate;

@interface CMFallDetectionManager : NSObject <CMFallDetectionManagerInternalDelegate> {
    CMFallDetectionManagerInternal *_internal;
}

@property (class, readonly, nonatomic, getter=isAvailable) BOOL available;

@property (readonly, nonatomic) long long authorizationStatus;
@property (weak, nonatomic) id<CMFallDetectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)_updateDelegateWithFallEvent:(id)a0;
- (void)requestAuthorizationWithHandler:(id /* block */)a0;
- (void)dealloc;
- (void)fallDetectionManagerInternalDidUpdateEnablementState:(id)a0;
- (void)fallDetectionManagerInternal:(id)a0 didUpdateFallEvent:(id)a1;
- (void)fallDetectionManagerInternalDidStartBackgroundSession:(id)a0;

@end
