@class NSString;

@interface SSVFairPlaySubscriptionStatus : NSObject <SSXPCCoding>

@property (nonatomic) BOOL hasSubscriptionLease;
@property (nonatomic) BOOL hasSubscriptionSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
