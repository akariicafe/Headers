@class NSDictionary;

@interface SFEndNetworkSearchFeedback : SFEndSearchFeedback

@property (nonatomic) long long responseSize;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSDictionary *networkTimingData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithStartSearch:(id)a0 responseSize:(long long)a1 statusCode:(long long)a2 networkTimingData:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
