@interface FCTodayPluginFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (readonly, nonatomic) long long bridgedGroupType;

- (id)initWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2 groupEmitterIdentifier:(id)a3 bridgedGroupType:(long long)a4;
- (BOOL)validateOperation;
- (void)performOperation;
- (void)_performOperation;
- (id)initWithContext:(id)a0 fromCursor:(id)a1 toCursor:(id)a2 groupEmitterIdentifier:(id)a3;

@end
