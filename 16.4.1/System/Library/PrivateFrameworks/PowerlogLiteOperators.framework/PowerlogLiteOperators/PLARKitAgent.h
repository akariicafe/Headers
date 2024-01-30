@interface PLARKitAgent : PLAgent

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (void)load;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventForwardDefinitionState;

- (void)initOperatorDependancies;
- (void)log;

@end
