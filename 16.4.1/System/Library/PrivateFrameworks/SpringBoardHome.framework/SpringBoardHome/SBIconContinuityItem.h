@class NSString;

@interface SBIconContinuityItem : NSObject

@property (readonly, nonatomic) long long badgeType;
@property (readonly, nonatomic) NSString *systemImageName;

+ (long long)_continuityBadgeTypeForNSString:(id)a0;
+ (id)_resolvedItemForExplicitBadgeType:(long long)a0 deviceTypeIdentifier:(id)a1;
+ (id)itemForBadgeTypeString:(id)a0 deviceTypeIdentifier:(id)a1;
+ (id)itemForContinuityInfo:(id)a0;
+ (id)itemWithBadgeType:(long long)a0 deviceTypeIdentifier:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBadgeType:(long long)a0 systemImageName:(id)a1;

@end
