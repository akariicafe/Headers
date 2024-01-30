@class NSString;

@interface ICPlayActivityEventItemIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long cloudID;
@property (readonly, copy, nonatomic) NSString *lyricsID;
@property (readonly, nonatomic) long long purchasedAdamID;
@property (readonly, nonatomic) long long radioAdamID;
@property (readonly, nonatomic) long long equivalencySourceAdamID;
@property (readonly, nonatomic) long long subscriptionAdamID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_copyWithClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;

@end
