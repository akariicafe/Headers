@class NSString;

@interface CKVOriginApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, copy) CKVOriginApp *Messages;
@property (class, readonly, copy) CKVOriginApp *Photos;
@property (class, readonly, copy) CKVOriginApp *Shortcuts;
@property (class, readonly, copy) CKVOriginApp *Contacts;
@property (class, readonly, copy) CKVOriginApp *Applications;
@property (class, readonly, copy) CKVOriginApp *HomeKit;
@property (class, readonly, copy) CKVOriginApp *MediaPlayer;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *universalAppId;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToApp:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isKnownApp;
- (id)initWithAppId:(id)a0;

@end
