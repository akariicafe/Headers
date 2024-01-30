@class NSString, NSArray;

@interface CKVSQLCommandClause : NSObject

@property (readonly, nonatomic) NSString *clause;
@property (readonly, nonatomic) NSArray *parameters;

- (id)init;
- (id)initWithClause:(id)a0 parameters:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
