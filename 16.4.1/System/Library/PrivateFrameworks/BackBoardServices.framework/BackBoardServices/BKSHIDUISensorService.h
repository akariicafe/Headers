@class BKSHIDUISensorCharacteristics, BSCompoundAssertion, BKSHIDUISensorMode;

@interface BKSHIDUISensorService : NSObject {
    BSCompoundAssertion *_modeAssertion;
    BKSHIDUISensorMode *_prevailingMode;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BKSHIDUISensorCharacteristics *sensorCharacteristics;

+ (id)sharedInstance;

- (void)_lock_setupAssertion;
- (id)requestUISensorMode:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
