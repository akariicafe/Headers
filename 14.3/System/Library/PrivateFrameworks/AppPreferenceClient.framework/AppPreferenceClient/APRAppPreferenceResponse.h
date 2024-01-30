@class NSString, NSArray, ATXResponse;

@interface APRAppPreferenceResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *intentType;
@property (nonatomic) unsigned long long experience;
@property (readonly, nonatomic) ATXResponse *atxResponse;
@property (readonly, nonatomic) NSString *ABGroup;
@property (readonly, nonatomic) NSArray *bundleIds;
@property (readonly, nonatomic) unsigned long long feedbackSource;
@property (readonly, nonatomic) unsigned long long engagementType;
@property (readonly, nonatomic) NSString *engagedBundleId;

- (id)sessionId;
- (void).cxx_destruct;
- (id)json;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)jsonDescription;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)jsonData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAppPreferenceResponse:(id)a0;
- (id)initWithAtxResponse:(id)a0 abGroup:(id)a1 experience:(unsigned long long)a2 intentType:(id)a3;
- (void)updateFeedbackSource:(unsigned long long)a0 engagementType:(unsigned long long)a1 engagedBundleId:(id)a2;
- (void)updateExperience:(unsigned long long)a0;

@end
