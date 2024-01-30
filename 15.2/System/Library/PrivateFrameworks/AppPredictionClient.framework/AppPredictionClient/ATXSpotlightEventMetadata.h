@class NSString, NSNumber;

@interface ATXSpotlightEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *queryAtEngagement;
@property (retain, nonatomic) NSString *engagedAppString;
@property (retain, nonatomic) NSNumber *didSearchDuringSession;
@property (retain, nonatomic) NSString *searchEngagedBundleId;
@property (retain, nonatomic) NSNumber *searchEngagedActionType;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)initWithQueryAtEngagement:(id)a0 engagedAppString:(id)a1 didSearchDuringSession:(id)a2 searchEngagedBundleId:(id)a3 searchEngagedActionType:(id)a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToATXSpotlightEventMetadata:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (unsigned long long)hash;
- (id)encodeAsProto;

@end
