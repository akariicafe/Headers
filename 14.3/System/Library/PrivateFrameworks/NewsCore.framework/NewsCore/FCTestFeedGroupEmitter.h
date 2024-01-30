@interface FCTestFeedGroupEmitter : FCSingleTagFeedGroupEmitter

@property (nonatomic) BOOL disableFiltering;
@property (nonatomic) BOOL enableSingletonGroups;

+ (BOOL)canMergeGroupsUnconditionally;

- (BOOL)emitsSingletonGroups;
- (Class)classForGroupEmittingOperation;
- (id)operationToEmitGroupWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2;

@end
