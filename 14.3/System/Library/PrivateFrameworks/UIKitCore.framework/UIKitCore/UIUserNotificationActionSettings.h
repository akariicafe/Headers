@class NSString, NSDictionary;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSDictionary *actionsByContext;

- (id)actions;
- (void).cxx_destruct;
- (id)actionsForContext:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategory:(id)a0 actionsByContext:(id)a1;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)a0;
- (id)validatedSettings;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
