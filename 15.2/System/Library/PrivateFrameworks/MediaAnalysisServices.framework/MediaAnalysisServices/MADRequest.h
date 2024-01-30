@class NSArray, NSError;

@interface MADRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) NSError *error;

- (void)setResults:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
