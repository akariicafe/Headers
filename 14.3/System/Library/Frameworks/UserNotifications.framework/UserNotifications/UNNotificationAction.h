@class NSString, NSURL;

@interface UNNotificationAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *textInputButtonTitle;
@property (readonly, copy, nonatomic) NSString *textInputPlaceholder;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long options;

+ (id)actionWithIdentifier:(id)a0 title:(id)a1 url:(id)a2;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2;
+ (id)actionWithIdentifier:(id)a0 title:(id)a1 url:(id)a2 options:(unsigned long long)a3;

- (id)_description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_initWithIdentifier:(id)a0 title:(id)a1 options:(unsigned long long)a2 textInputButtonTitle:(id)a3 textInputPlaceholder:(id)a4 url:(id)a5;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
