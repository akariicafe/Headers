@class NSString;

@interface ATXNowPlayingDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *track;
@property (readonly, nonatomic) long long nowPlayingState;

- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)description;
- (id)initWithDKEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrentContextStoreValues;
- (id)initWithBundleId:(id)a0 track:(id)a1 nowPlayingState:(long long)a2 startDate:(id)a3 endDate:(id)a4;

@end
