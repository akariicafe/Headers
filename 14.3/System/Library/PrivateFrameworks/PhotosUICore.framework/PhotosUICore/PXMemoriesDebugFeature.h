@class NSString, NSArray, UIColor;

@interface PXMemoriesDebugFeature : NSObject <PXProtoFeature>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedTypeStringValue;
@property (readonly, nonatomic) long long featureKind;
@property (readonly, nonatomic) long long featureGroupIndex;
@property (readonly, nonatomic) NSString *featureLocalizedTitle;
@property (readonly, nonatomic) NSArray *featurePeople;
@property (readonly, nonatomic) double featureScore;
@property (readonly, nonatomic) UIColor *featureTintColor;
@property (readonly, nonatomic) UIColor *featureSelectedTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_tintColorForFeatureType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 type:(unsigned long long)a1;

@end
