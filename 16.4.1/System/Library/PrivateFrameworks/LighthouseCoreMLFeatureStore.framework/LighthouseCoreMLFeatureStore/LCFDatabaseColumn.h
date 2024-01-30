@class NSString;

@interface LCFDatabaseColumn : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *typeDb;
@property (readonly, nonatomic) long long type;

- (void).cxx_destruct;
- (id)init:(id)a0 typeDb:(id)a1;

@end
