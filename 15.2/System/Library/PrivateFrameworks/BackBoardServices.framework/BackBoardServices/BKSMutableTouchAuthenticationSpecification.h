@class NSSet;

@interface BKSMutableTouchAuthenticationSpecification : BKSTouchAuthenticationSpecification

@property (copy, nonatomic) NSSet *displays;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long authenticationMessageContext;
@property (nonatomic) unsigned long long hitTestInformationMask;

- (void)setSlotID:(unsigned int)a0;
- (void)setDisplays:(id)a0;
- (void)setAuthenticationMessageContext:(unsigned long long)a0;
- (void)setHitTestInformationMask:(unsigned long long)a0;

@end
