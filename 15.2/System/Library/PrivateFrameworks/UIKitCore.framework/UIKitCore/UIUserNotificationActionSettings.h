@class NSString, NSDictionary;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSDictionary *actionsByContext;

- (id)validatedSettings;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)actionsForContext:(unsigned long long)a0;
- (id)initWithCategory:(id)a0 actionsByContext:(id)a1;
- (id)actions;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
