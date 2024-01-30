@class NSDate, PrivacyProxyNetworkStatus;

@interface PrivacyProxyNetworkStatusTime : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PrivacyProxyNetworkStatus *networkStatus;
@property (retain, nonatomic) NSDate *networkStatusStartTime;
@property (retain, nonatomic) NSDate *networkStatusEndTime;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
