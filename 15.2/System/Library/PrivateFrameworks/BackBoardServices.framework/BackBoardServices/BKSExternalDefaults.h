@class BKSPersistentConnectionDefaults, BKSKeyboardDefaults, BKSLockdownDefaults, BKSSpringBoardDefaults, BKSIAPDefaults;

@interface BKSExternalDefaults : BKSAbstractDefaults {
    BKSLockdownDefaults *_lazy_lockdownDefaults;
    BKSIAPDefaults *_lazy_iapDefaults;
    BKSPersistentConnectionDefaults *_lazy_persistentConnectionDefaults;
    BKSSpringBoardDefaults *_lazy_springBoardDefaults;
    BKSKeyboardDefaults *_lazy_keyboardDefaults;
}

@property (readonly, retain, nonatomic) BKSLockdownDefaults *lockdownDefaults;
@property (readonly, retain, nonatomic) BKSIAPDefaults *iapDefaults;
@property (readonly, retain, nonatomic) BKSPersistentConnectionDefaults *persistentConnectionDefaults;
@property (readonly, retain, nonatomic) BKSSpringBoardDefaults *springBoardDefaults;
@property (readonly, retain, nonatomic) BKSKeyboardDefaults *keyboardDefaults;

- (void).cxx_destruct;

@end
