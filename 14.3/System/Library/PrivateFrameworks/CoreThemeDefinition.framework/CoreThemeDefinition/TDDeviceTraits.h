@class NSArray, NSString;

@interface TDDeviceTraits : NSObject <NSCopying> {
    long long _sizeClassHorizontal;
    long long _sizeClassVertical;
}

@property (nonatomic) long long idiomValue;
@property (copy, nonatomic) NSArray *hostedIdiomValues;
@property (nonatomic) long long graphicsFeatureSetClassValue;
@property (copy, nonatomic) NSArray *graphicsFeatureSetFallbackValues;
@property (nonatomic) long long displayGamutValue;
@property (nonatomic) long long deploymentTargetValue;
@property (nonatomic) long long dynamicDisplayModeValue;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSString *idiom;
@property (retain, nonatomic) NSArray *hostedIdioms;
@property (nonatomic) long long subtype;
@property (retain, nonatomic) NSString *displayGamut;
@property (retain, nonatomic) NSString *deploymentTarget;
@property (nonatomic) long long memoryPerformanceClass;
@property (nonatomic) long long graphicsPerformanceClass;
@property (retain, nonatomic) NSString *graphicsFeatureSetClass;
@property (retain, nonatomic) NSArray *graphicsFeatureSetFallbacks;
@property (retain, nonatomic) NSArray *subtypeFallbackValues;
@property (retain, nonatomic) NSString *dynamicDisplayMode;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (long long)_idiomFromTraitString:(id)a0;
- (id)_idiomToTraitString:(long long)a0;
- (long long)_graphicsFeatureSetClassFromTraitString:(id)a0;
- (id)_graphicsFeatureSetClassToTraitString:(long long)a0;
- (long long)_displayGamutFromTraitString:(id)a0;
- (id)_displayGamutToTraitString:(long long)a0;
- (long long)_deploymentTargetFromTraitString:(id)a0;
- (id)_deploymentTargetToTraitString:(long long)a0;
- (long long)_dynamicDisplayModeFromTraitString:(id)a0;
- (id)_dynamicDisplayModeToTraitString:(long long)a0;

@end
