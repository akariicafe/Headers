@class NSString, NSDate;

@interface RBPowerAssertion : NSObject {
    unsigned int _identifier;
    NSDate *_acquisitionDate;
    NSString *_name;
    NSString *_baseName;
    BOOL _invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (int)_targetPid;
- (id)description;
- (id)_preventIdleSleepIdentifiers;

@end
