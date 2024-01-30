@interface PLARKitAgent : PLAgent

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionState;

- (void)log;
- (void)initOperatorDependancies;

@end
