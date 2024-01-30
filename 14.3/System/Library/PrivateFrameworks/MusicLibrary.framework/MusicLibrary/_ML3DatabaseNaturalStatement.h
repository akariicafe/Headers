@class NSString, NSMutableArray;

@interface _ML3DatabaseNaturalStatement : NSObject

@property (retain, nonatomic) NSString *sql;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (id)naturalStatementWithSQL:(id)a0 parameters:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)setParameter:(id)a0 forPosition:(unsigned long long)a1;

@end
