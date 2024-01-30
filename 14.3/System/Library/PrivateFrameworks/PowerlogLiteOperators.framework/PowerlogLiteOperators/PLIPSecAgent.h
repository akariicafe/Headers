@interface PLIPSecAgent : PLAgent

@property (nonatomic) int ipsecSocket;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionIPSecWake;

- (void)initOperatorDependancies;
- (void)logEventPointIPSecWake;
- (void)initIPSecKEvent;

@end
