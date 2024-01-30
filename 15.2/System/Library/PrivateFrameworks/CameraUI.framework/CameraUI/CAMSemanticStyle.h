@class NSDictionary, NSString;

@interface CAMSemanticStyle : NSObject

@property (readonly, nonatomic) double subjectBias;
@property (readonly, nonatomic) double sceneBias;
@property (readonly, nonatomic) double warmthBias;
@property (readonly, nonatomic) long long presetType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isNeutral) BOOL neutral;
@property (readonly, nonatomic, getter=isCustomizable) BOOL customizable;
@property (readonly, nonatomic, getter=isCustomized) BOOL customized;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *presetDisplayName;
@property (readonly, nonatomic) long long makerPreset;

+ (id)defaultStyles;
+ (id)styleWithDictionary:(id)a0 error:(id *)a1;
+ (void)getSceneBias:(out double *)a0 warmthBias:(out double *)a1 forPresetType:(long long)a2;
+ (id)persistenceStringForPresetType:(long long)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPresetType:(long long)a0;
- (BOOL)isEqualToSemanticStyle:(id)a0;
- (id)initWithPresetType:(long long)a0 subjectBias:(double)a1 sceneBias:(double)a2 warmthBias:(double)a3;
- (long long)_makerPresetWithSceneBias:(double)a0 warmthBias:(double)a1;

@end
