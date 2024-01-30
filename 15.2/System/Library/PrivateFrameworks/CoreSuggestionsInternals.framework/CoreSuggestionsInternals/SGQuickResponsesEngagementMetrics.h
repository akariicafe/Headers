@class NSString, NSMutableArray;

@interface SGQuickResponsesEngagementMetrics : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *lang;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) NSString *factorPackId;
@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSMutableArray *engagementDeltas;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLang:(id)a0 rolloutId:(id)a1 factorPackId:(id)a2 experimentId:(id)a3 treatmentId:(id)a4;
- (id)initWithLang:(id)a0 rolloutId:(id)a1 factorPackId:(id)a2 experimentId:(id)a3 treatmentId:(id)a4 engagementDeltas:(id)a5;
- (BOOL)isEqualToQuickResponsesEngagementMetrics:(id)a0;

@end
