@class NSArray;

@interface WCAFetchSQLiteResponse : WCAFetchResponse

@property (copy, nonatomic) NSArray *records;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithRecords:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
