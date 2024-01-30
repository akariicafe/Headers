@class NSArray, NSDate;

@interface _PSSiriHandleRankerPredictionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSArray *bundleIds;
@property long long domain;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
