@interface EDPersistenceDatabaseGenerationWindow : NSObject

@property (readonly, nonatomic) long long earliestGeneration;
@property (readonly, nonatomic) long long latestGeneration;

- (id)init;
- (void)insertGeneration:(long long)a0;

@end
