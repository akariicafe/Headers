@interface PLIPSecAgent : PLAgent

@property (nonatomic) int ipsecSocket;

+ (id)entryEventPointDefinitions;
+ (id)entryEventPointDefinitionIPSecWake;
+ (void)load;

- (void)logEventPointIPSecWake;
- (void)initIPSecKEvent;
- (void)initOperatorDependancies;

@end
