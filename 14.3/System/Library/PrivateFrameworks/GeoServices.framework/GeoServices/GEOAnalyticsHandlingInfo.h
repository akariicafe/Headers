@interface GEOAnalyticsHandlingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long logMsgType;
@property (nonatomic) long long persistCount;
@property (nonatomic) long long uploadSuccessCountOnWifi;
@property (nonatomic) long long uploadSuccessByteCountOnWifi;
@property (nonatomic) long long uploadSuccessCountOnCellular;
@property (nonatomic) long long uploadSuccessByteCountOnCellular;
@property (nonatomic) long long uploadFailureCount;
@property (nonatomic) long long dbExpireCount;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
