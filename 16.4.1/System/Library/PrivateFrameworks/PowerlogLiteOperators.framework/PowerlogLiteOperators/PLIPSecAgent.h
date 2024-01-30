@interface PLIPSecAgent : PLAgent

@property (nonatomic) int ipsecSocket;

+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionIPSecWake;

- (void)initOperatorDependancies;
- (void)initIPSecKEvent;
- (void)logEventPointIPSecWake;

@end
