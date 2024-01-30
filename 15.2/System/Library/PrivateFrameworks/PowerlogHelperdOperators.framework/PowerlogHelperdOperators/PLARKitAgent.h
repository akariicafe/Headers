@interface PLARKitAgent : PLAgent

+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventForwardDefinitionState;

- (void)log;
- (void)initOperatorDependancies;

@end
