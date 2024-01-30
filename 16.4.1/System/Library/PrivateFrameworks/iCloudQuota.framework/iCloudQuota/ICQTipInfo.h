@class ICQTipIcon, NSString, NSArray, NSURL;

@interface ICQTipInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *anchor;
@property (copy, nonatomic) NSString *id;
@property (retain, nonatomic) NSURL *dismissURL;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) ICQTipIcon *icon;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_parseTipIcon:(id)a0;

@end
