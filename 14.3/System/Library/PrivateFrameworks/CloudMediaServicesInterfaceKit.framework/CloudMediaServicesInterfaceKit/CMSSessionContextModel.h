@class NSURL, NSString, NSDictionary;

@interface CMSSessionContextModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *serverOverrideURL;
@property (copy, nonatomic) NSString *serverEnvironmentOverride;
@property (copy, nonatomic) NSString *sessionAuthHeaderOverride;
@property (nonatomic) BOOL homeKitAllowExplicitContentSetting;
@property (nonatomic) BOOL homeKitUpdateListeningHistorySetting;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *homeUserID;
@property (nonatomic) BOOL serviceUpdateListeningHistory;
@property (retain, nonatomic) NSDictionary *serviceUpdateListeningHistoryAllUsers;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
