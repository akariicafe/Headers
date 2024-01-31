@class NSSet, NSDimension, CPAccNavParam;

@interface CPAccNavParamKey : NSObject <NSCopying>

@property (nonatomic) unsigned short key;
@property (retain, nonatomic) NSSet *characteristics;
@property (nonatomic) BOOL isBoolValue;
@property (nonatomic) unsigned char enumType;
@property (retain, nonatomic) NSDimension *dimension;
@property (nonatomic) BOOL isIntegerValue;
@property (nonatomic) BOOL isTimeIntervalValue;
@property (nonatomic) BOOL hasVariants;
@property (nonatomic) long long accNavType;
@property (weak, nonatomic) CPAccNavParam *param;
@property (readonly, nonatomic) BOOL hasCharacteristics;
@property (readonly, nonatomic) id unsetValue;

+ (id)paramKey:(unsigned short)a0;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copySettingIsTimeIntervalValue:(BOOL)a0;
- (id)copySettingAccNavType:(long long)a0;
- (id)copySettingDimension:(id)a0;
- (id)copySettingEnumType:(unsigned char)a0;
- (id)copySettingHasVariants:(BOOL)a0;
- (id)copySettingIsBoolValue:(BOOL)a0;
- (id)copySettingIsIntegerValue:(BOOL)a0;

@end
