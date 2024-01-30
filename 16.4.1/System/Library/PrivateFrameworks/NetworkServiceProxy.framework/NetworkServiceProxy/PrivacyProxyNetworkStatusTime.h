@class NSDate, PrivacyProxyNetworkStatus;

@interface PrivacyProxyNetworkStatusTime : NSObject <NSSecureCoding, NSCopying> {
    PrivacyProxyNetworkStatus *_networkStatus;
    NSDate *_networkStatusStartTime;
    NSDate *_networkStatusEndTime;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
