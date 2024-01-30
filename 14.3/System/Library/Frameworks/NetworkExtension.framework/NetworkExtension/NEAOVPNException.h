@class NSString, NSArray;

@interface NEAOVPNException : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *serviceName;
@property (copy) NSString *bundleIdentifier;
@property (copy) NSArray *limitToProtocols;
@property long long action;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isLimitedToUDP;
- (void)encodeWithCoder:(id)a0;

@end
