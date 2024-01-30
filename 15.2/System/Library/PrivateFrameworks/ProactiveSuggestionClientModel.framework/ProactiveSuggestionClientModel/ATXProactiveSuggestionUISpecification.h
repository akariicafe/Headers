@class NSString, NSArray;

@interface ATXProactiveSuggestionUISpecification : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSArray *preferredLayoutConfigs;
@property (readonly, nonatomic) BOOL allowedOnLockscreen;
@property (readonly, nonatomic) BOOL allowedOnHomeScreen;
@property (readonly, nonatomic) BOOL allowedOnSpotlight;
@property (readonly, nonatomic) BOOL shouldClearOnEngagement;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (BOOL)checkAndReportDecodingFailureIfNeededForBOOL:(BOOL)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 predictionReason:(id)a2 preferredLayoutConfigs:(id)a3 allowedOnLockscreen:(BOOL)a4 allowedOnHomeScreen:(BOOL)a5 allowedOnSpotlight:(BOOL)a6 shouldClearOnEngagement:(BOOL)a7;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)fuzzyIsEqualToUISpecification:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 preferredLayoutConfigs:(id)a2 allowedOnLockscreen:(BOOL)a3 allowedOnHomeScreen:(BOOL)a4 allowedOnSpotlight:(BOOL)a5;
- (unsigned long long)hash;
- (id)encodeAsProto;

@end
