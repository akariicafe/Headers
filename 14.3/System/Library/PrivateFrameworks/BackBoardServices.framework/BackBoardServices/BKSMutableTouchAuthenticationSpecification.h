@class NSSet;

@interface BKSMutableTouchAuthenticationSpecification : BKSTouchAuthenticationSpecification

@property (copy, nonatomic) NSSet *displays;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long authenticationMessageContext;

- (void)setDisplays:(id)a0;
- (void)setSlotID:(unsigned int)a0;
- (void)setAuthenticationMessageContext:(unsigned long long)a0;

@end
