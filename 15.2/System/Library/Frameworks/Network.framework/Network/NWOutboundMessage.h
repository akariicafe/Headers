@interface NWOutboundMessage : NWMessage

@property (nonatomic) double relativePriority;
@property (nonatomic) unsigned long long expirationMilliseconds;

- (id)initWithContent:(id)a0;
- (void)addAntecedent:(id)a0;

@end
