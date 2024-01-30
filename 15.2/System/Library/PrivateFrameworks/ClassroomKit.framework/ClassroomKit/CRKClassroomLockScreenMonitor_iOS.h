@class NSString;

@interface CRKClassroomLockScreenMonitor_iOS : NSObject <CRKClassroomLockScreenMonitoring> {
    int mDidAppearObserver;
    int mDidDismissObserver;
}

@property (nonatomic, getter=isClassroomLockScreenVisible) BOOL classroomLockScreenVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startObserving;
- (void)endObserving;
- (id)init;
- (void)dealloc;
- (void)displayClassroomLockScreenWithLabel:(id)a0 passcode:(id)a1;
- (void)dismissClassroomLockScreen;

@end
