@class NSString, TSUColor, TSDPathSource;
@protocol NSObject;

@interface KNBuildAttributeValue : TSKSosBase <NSCopying> {
    int _integerValue;
    double _doubleValue;
    BOOL _boolValue;
    NSString *_stringValue;
    TSDPathSource *_pathSourceValue;
    TSUColor *_colorValue;
    BOOL _definedIntegerValue;
    BOOL _definedDoubleValue;
    BOOL _definedBoolValue;
    BOOL _definedStringValue;
    BOOL _definedPathSourceValue;
    BOOL _definedColorValue;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) id<NSObject> objectValue;
@property (readonly, nonatomic) long long integerValue;
@property (readonly, nonatomic) double doubleValue;
@property (readonly, nonatomic) BOOL boolValue;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) TSDPathSource *pathSourceValue;
@property (readonly, nonatomic) TSUColor *colorValue;

+ (id)emptyValue;
+ (id)valueWithColor:(id)a0;
+ (id)valueWithBool:(BOOL)a0;
+ (id)valueWithDouble:(double)a0;
+ (id)valueWithInteger:(long long)a0;
+ (id)valueWithPathSource:(id)a0;
+ (id)valueWithString:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBoolValue:(BOOL)a0;
- (id)initWithStringValue:(id)a0;
- (id)initWithIntegerValue:(long long)a0;
- (id)initWithColorValue:(id)a0;
- (id)initWithDoubleValue:(double)a0;
- (id)initWithPathSourceValue:(id)a0;
- (BOOL)p_attributesAreEmpty;

@end
