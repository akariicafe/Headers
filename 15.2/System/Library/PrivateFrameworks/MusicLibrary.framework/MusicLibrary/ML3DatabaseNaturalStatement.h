@class NSString, NSMutableArray;

@interface ML3DatabaseNaturalStatement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *sql;
@property (retain, nonatomic) NSMutableArray *parameters;

+ (id)naturalStatementWithSQL:(id)a0 parameters:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSQL:(id)a0 parameters:(id)a1;
- (void)setParameter:(id)a0 forPosition:(unsigned long long)a1;

@end
