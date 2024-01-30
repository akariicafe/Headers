@class NSString;

@interface HDSQLiteEntityForeignKey : NSObject

@property (readonly, nonatomic) Class entityClass;
@property (readonly, copy, nonatomic) NSString *property;
@property (readonly, nonatomic) long long deletionAction;
@property (readonly, nonatomic) BOOL isDeferred;

- (void).cxx_destruct;
- (id)creationSQL;
- (id)initWithEntityClass:(Class)a0 property:(id)a1 deletionAction:(long long)a2;
- (id)initWithEntityClass:(Class)a0 property:(id)a1 deletionAction:(long long)a2 isDeferred:(BOOL)a3;

@end
