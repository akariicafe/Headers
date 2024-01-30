@class NSString, BSMachPortSendRight;

@interface BKSAnimationFenceAssertion : NSObject <BSXPCCoding, BSInvalidatable> {
    unsigned long long _fenceName;
    unsigned long long _assertionName;
    BSMachPortSendRight *_preFence;
    int _invalid;
    BOOL _shouldTrace;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newSystemFenceAssertionForTriggerPort:(unsigned int)a0;

- (id)initWithXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)invalidate;
- (id)_initWithFenceName:(unsigned long long)a0 assertionName:(unsigned long long)a1 preFence:(id)a2 shouldTrace:(BOOL)a3;

@end
