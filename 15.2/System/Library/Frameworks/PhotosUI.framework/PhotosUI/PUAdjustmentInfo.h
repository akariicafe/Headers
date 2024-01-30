@class NSString;
@protocol PUAdjustmentCustomBehavior;

@interface PUAdjustmentInfo : NSObject

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *localizedSectionName;
@property (retain, nonatomic) NSString *iconName;
@property (nonatomic) BOOL enabled;
@property (nonatomic) double defaultLevel;
@property (nonatomic) double identityLevel;
@property (nonatomic) double minimumLevel;
@property (nonatomic) double maximumLevel;
@property (nonatomic) double baseLevel;
@property (nonatomic) double currentLevel;
@property (nonatomic) double lastAdjustedLevel;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *adjustmentKey;
@property (retain, nonatomic) NSString *settingKey;
@property (retain, nonatomic) NSString *attributeKey;
@property (retain, nonatomic) id<PUAdjustmentCustomBehavior> customSettingDelegate;
@property (readonly, nonatomic) double normalizedCurrentLevel;
@property (readonly, nonatomic) double normalizedDefaultLevel;

- (id)description;
- (void).cxx_destruct;
- (id)copy;

@end
