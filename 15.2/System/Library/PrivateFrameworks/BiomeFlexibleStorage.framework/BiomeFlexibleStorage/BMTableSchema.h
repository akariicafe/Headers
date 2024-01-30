@class NSArray;

@interface BMTableSchema : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *columnNames;

- (void)encodeWithCoder:(id)a0;
- (id)initWithColumnNames:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
