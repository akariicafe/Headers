@class NSString, CWFChannel, NSDictionary, NSDate, CLLocation;

@interface CWFBSS : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (copy, nonatomic) NSDate *lastAssociatedAt;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;

- (id)initWithExternalForm:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToBSS:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)externalForm;
- (unsigned long long)hash;

@end
