@class HDSimpleGraphDatabase, HDProfile, HDDatabaseTransaction;

@interface HDOntologyTransaction : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDDatabaseTransaction *databaseTransaction;
@property (readonly, nonatomic) HDSimpleGraphDatabase *graphDatabase;

- (id)initWithDatabaseTransaction:(id)a0 graphDatabase:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
