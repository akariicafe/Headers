@class NSArray;

@interface BMSelectExpression : NSObject <BMTableQueryExpression>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *columnNames;
@property (retain, nonatomic) NSArray *children;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithChildren:(id)a0 columnNames:(id)a1;
- (id)queryTable:(id)a0;

@end
