@class NSString;

@interface PrivacyProxyNetworkStatus : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long networkStatus;
@property int networkType;
@property (retain) NSString *networkName;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)serialize;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)networkTypeString;
- (id)networkStatusString;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStatus:(unsigned long long)a0 type:(int)a1 name:(id)a2;

@end
