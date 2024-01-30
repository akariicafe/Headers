@class NSArray;

@interface WCAFetchSQLiteResponse : WCAFetchResponse

@property (copy, nonatomic) NSArray *records;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRecords:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
