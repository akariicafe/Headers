@class BKSHIDUISensorCharacteristics, BSCompoundAssertion, BKSHIDUISensorMode;

@interface BKSHIDUISensorService : NSObject {
    BSCompoundAssertion *_modeAssertion;
    BKSHIDUISensorMode *_prevailingMode;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BKSHIDUISensorCharacteristics *sensorCharacteristics;

+ (id)sharedInstance;

- (id)requestUISensorMode:(id)a0;
- (void)_lock_setupAssertion;
- (void).cxx_destruct;
- (id)init;

@end
