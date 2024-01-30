@class NSArray;

@interface CRKFetchBooksResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *books;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
