@interface MPUTransportControlAccessibility : __MPUTransportControlAccessibility_super

@property (readonly, nonatomic) long long accessibilityTransportControlType;

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)accessibilityLabelForTransportControlWithType:(long long)a0 isPlaying:(BOOL)a1 isAlwaysLive:(BOOL)a2 displayedSkipIntervalDescription:(id)a3;
+ (id)accessibilityValueForTransportControlWithType:(long long)a0 withLikedState:(long long)a1 withRepeatType:(long long)a2 withShuffleType:(long long)a3;

@end
