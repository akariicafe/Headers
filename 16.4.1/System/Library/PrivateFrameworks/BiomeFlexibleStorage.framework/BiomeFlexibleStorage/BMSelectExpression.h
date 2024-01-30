@class NSArray;

@interface BMSelectExpression : NSObject <BMTableQueryExpression>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *columnNames;
@property (retain, nonatomic) NSArray *children;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithChildren:(id)a0 columnNames:(id)a1;
- (id)queryTable:(id)a0;

@end
