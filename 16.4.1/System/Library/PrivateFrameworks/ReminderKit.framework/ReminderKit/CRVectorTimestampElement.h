@interface CRVectorTimestampElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long clock;
@property (nonatomic) unsigned long long subclock;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)rem_compareToVectorTimestampElement:(id)a0;

@end
