@class NSString, UNNotificationAttachmentOptions, NSURL;

@interface UNNotificationAttachment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long family;
@property (readonly, copy, nonatomic) UNNotificationAttachmentOptions *options;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *type;

+ (id)attachmentWithIdentifier:(id)a0 URL:(id)a1 options:(id)a2 error:(id *)a3;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)family;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 URL:(id)a1 type:(id)a2 options:(id)a3;
- (id)initWithIdentifier:(id)a0 family:(unsigned long long)a1 URL:(id)a2 type:(id)a3 options:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
