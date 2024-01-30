@class NSString, NSNumber;

@interface ATXSpotlightEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *queryAtEngagement;
@property (retain, nonatomic) NSNumber *didSearchDuringSession;
@property (retain, nonatomic) NSString *searchEngagedBundleId;
@property (retain, nonatomic) NSNumber *searchEngagedActionType;

- (id)init;
- (void).cxx_destruct;
- (id)initWithProtoData:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithQueryAtEngagement:(id)a0 didSearchDuringSession:(id)a1 searchEngagedBundleId:(id)a2 searchEngagedActionType:(id)a3;
- (BOOL)isEqualToATXSpotlightEventMetadata:(id)a0;

@end
