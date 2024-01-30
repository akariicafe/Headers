@class NSString, SCLSchoolMode, SCLState;
@protocol HDSchoolTimeObserverDelegate;

@interface HDSchoolTimeObserver : NSObject <SCLSchoolModeDelegate> {
    SCLSchoolMode *_schoolMode;
    SCLState *_schoolModeState;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BOOL inSchoolMode;
@property (readonly, weak, nonatomic) id<HDSchoolTimeObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)unitTest_setSchoolMode:(BOOL)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_unitTestSchoolModeChanged;
- (void)schoolMode:(id)a0 didUpdateState:(id)a1 fromState:(id)a2;
- (void)schoolMode:(id)a0 didUpdateScheduleSettings:(id)a1;
- (void)schoolModeDidUpdateUnlockHistory:(id)a0;

@end
