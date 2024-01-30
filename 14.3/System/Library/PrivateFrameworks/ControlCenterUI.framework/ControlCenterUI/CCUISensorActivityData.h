@class NSString, UIColor;

@interface CCUISensorActivityData : NSObject <NSCopying>

@property (nonatomic) unsigned long long sensorType;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *attributionGroup;
@property (retain, nonatomic) UIColor *sensorIndicatorColor;
@property (nonatomic) BOOL usedRecently;
@property (nonatomic) BOOL launchToSettings;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
