@class UIColor, NSString, NSData, PKInkBehavior;

@interface PKInk : NSObject <NSCopying> {
    struct shared_ptr<PKProtobufUnknownFields> { struct PKProtobufUnknownFields *__ptr_; struct __shared_weak_count *__cntrl_; } _unknownFields;
}

@property (readonly, nonatomic) NSData *rawValue;
@property (nonatomic) void /* unknown type, empty encoding */ _sixChannelAddColor;
@property (nonatomic) void /* unknown type, empty encoding */ _sixChannelMultiplyColor;
@property (retain, nonatomic) PKInkBehavior *behavior;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) NSString *variant;
@property (readonly, nonatomic) double _weight;
@property (readonly, nonatomic) BOOL _isStrokeGeneratingInk;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) NSString *inkType;
@property (readonly, nonatomic) UIColor *color;

+ (id)inkWithIdentifier:(id)a0 color:(id)a1 weight:(double)a2;
+ (double)defaultWeightForIdentifier:(id)a0;
+ (id)inkWithType:(id)a0 color:(id)a1 weight:(double)a2;
+ (long long)currentInkVersionForInkIdentifier:(id)a0;
+ (double)defaultOpacityForIdentifier:(id)a0;
+ (id)inkWithIdentifier:(id)a0 properties:(id)a1;
+ (id)identifierForInkType:(id)a0;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
+ (id)inkWithIdentifier:(id)a0 color:(id)a1 variant:(id)a2;
+ (id)inkFromDictionary:(id)a0 color:(id)a1 identifier:(id)a2;
+ (id)inkFromInk:(id)a0 color:(id)a1;
+ (id)inkFromInk:(id)a0 withBehavior:(id)a1;
+ (id)colorForLassoStroke;
+ (id)identifierForCommandType:(unsigned int)a0 wantsObjectErase:(BOOL)a1;

- (void)setWeight:(double)a0;
- (id)description;
- (id)properties;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithArchive:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)dictionaryRepresentation;
- (id)initWithRawValue:(id)a0;
- (void)saveToArchive:(void *)a0;
- (id)initWithInkType:(id)a0 color:(id)a1;
- (BOOL)_isHandwritingInk;
- (BOOL)_isLassoInk;
- (BOOL)_isEraserInk;
- (void)_addTestDataToUnknownFields;
- (id)_dataInUnknownFields;
- (id)_sixChannelVersion;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3;
- (BOOL)_shouldSaveSixChannelAddColor;
- (BOOL)_shouldSaveSixChannelMultiplyColor;
- (id)initWithV1Archive:(const void *)a0 serializationVersion:(unsigned long long)a1;
- (void)saveToV1Archive:(void *)a0;
- (BOOL)isEqualUnweightedInk:(id)a0;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 weight:(double)a4;
- (void)_setupDefaultSixChannelAddAndMultiplyColors;
- (id)initWithIdentifier:(id)a0 color:(id)a1 version:(unsigned long long)a2 variant:(id)a3 behavior:(id)a4;
- (BOOL)isEqualInk:(id)a0;
- (unsigned long long)hashValueForFloat:(double)a0;
- (void /* unknown type, empty encoding */)_defaultSixChannelAddColor;
- (void /* unknown type, empty encoding */)_defaultSixChannelMultiplyColor;
- (void)_setupCustomizedSixChannelColors;

@end
