@class NSString, NSArray;

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *serviceName;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSArray *limitToProtocols;
@property long long action;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isLimitedToUDP;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
