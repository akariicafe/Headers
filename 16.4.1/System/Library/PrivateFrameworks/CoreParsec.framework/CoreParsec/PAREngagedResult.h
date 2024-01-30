@class NSString, NSData, NSDate;

@interface PAREngagedResult : NSObject <NSSecureCoding, SFEngagedResult>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *searchString;
@property (nonatomic) int type;
@property (copy, nonatomic) NSData *encodedNormalizedTopic;
@property (copy, nonatomic) NSDate *engagementTime;
@property (nonatomic) double score;
@property (nonatomic) double freshnessScore;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
