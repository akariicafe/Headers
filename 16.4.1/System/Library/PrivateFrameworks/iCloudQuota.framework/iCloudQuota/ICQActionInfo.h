@class NSString, ICQConfirmationInfo, NSURL, ICQLink;

@interface ICQActionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDefault;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) ICQLink *icqLink;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) ICQConfirmationInfo *confirmation;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initFromConfirmationAction:(id)a0;

@end
