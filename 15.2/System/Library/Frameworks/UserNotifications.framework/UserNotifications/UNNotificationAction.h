@class NSString, NSURL, UNNotificationActionIcon;

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *textInputButtonTitle;
@property (readonly, copy, nonatomic) NSString *textInputPlaceholder;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) UNNotificationActionIcon *icon;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1 url:(id)a2;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 url:(id)a2 icon:(id)a3;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 url:(id)a2 options:(unsigned long long)a3;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2 icon:(id)a3;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 url:(id)a2 options:(unsigned long long)a3 icon:(id)a4;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_description;
- (unsigned long long)hash;
- (id)_initWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2 textInputButtonTitle:(id)a3 textInputPlaceholder:(id)a4 url:(id)a5 icon:(id)a6;

@end
