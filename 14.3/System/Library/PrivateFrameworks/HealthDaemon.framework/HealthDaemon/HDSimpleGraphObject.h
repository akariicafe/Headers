@class HDSimpleGraphDatabase;

@interface HDSimpleGraphObject : NSObject

@property (readonly, weak, nonatomic) HDSimpleGraphDatabase *database;
@property (readonly, nonatomic) long long rowID;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDatabase:(id)a0 rowID:(long long)a1;

@end
