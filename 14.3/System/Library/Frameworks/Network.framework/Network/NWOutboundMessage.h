@interface NWOutboundMessage : NWMessage

@property (nonatomic) double relativePriority;
@property (nonatomic) unsigned long long expirationMilliseconds;

- (void)addAntecedent:(id)a0;
- (id)initWithContent:(id)a0;

@end
