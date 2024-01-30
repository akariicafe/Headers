@class TSKDateTimeFormat, TSKNumberFormat, TSKLegacyCustomFormat, TSKCustomFormatWrapper, TSKBooleanFormat, TSKCurrencyFormat, TSKFractionFormat, TSKBaseFormat, TSKDurationFormat, TSKStepperSliderFormat_DEPRECATED, TSKMultipleChoiceListFormat_DEPRECATED;

@interface TSKFormat : NSObject <NSCopying>

@property (class, readonly, nonatomic) TSKFormat *textFormat;
@property (class, readonly, nonatomic) TSKFormat *checkboxFormat;
@property (class, readonly, nonatomic) TSKFormat *ratingFormat;
@property (class, readonly, nonatomic) TSKFormat *booleanFormat;

@property (readonly, nonatomic) struct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; unsigned char x1; unsigned char x2; unsigned char x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; } x1; } formatStruct;
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) TSKNumberFormat *asNumberFormat;
@property (readonly, nonatomic) TSKCurrencyFormat *asCurrencyFormat;
@property (readonly, nonatomic) TSKFractionFormat *asFractionFormat;
@property (readonly, nonatomic) TSKBaseFormat *asBaseFormat;
@property (readonly, nonatomic) TSKDateTimeFormat *asDateTimeFormat;
@property (readonly, nonatomic) TSKDurationFormat *asDurationFormat;
@property (readonly, nonatomic) TSKCustomFormatWrapper *asCustomFormatWrapper;
@property (readonly, nonatomic) TSKLegacyCustomFormat *asLegacyCustomFormat;
@property (readonly, nonatomic) TSKBooleanFormat *asBooleanFormat;
@property (readonly, nonatomic) TSKStepperSliderFormat_DEPRECATED *asStepperSliderFormat;
@property (readonly, nonatomic) TSKMultipleChoiceListFormat_DEPRECATED *asMultipleChoiceListFormat;

+ (void)initialize;
+ (id)defaultFormatWithFormatType:(unsigned int)a0 locale:(id)a1;
+ (id)formatFromArchive:(const void *)a0;
+ (id)formatFromTSUFormatStruct:(struct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; id x2; } x3; struct { unsigned char x0 : 1; unsigned char x1; unsigned char x2; unsigned char x3; } x4; struct { id x0; id x1; unsigned int x2; unsigned char x3; } x5; } x1; })a0;
+ (id)uniqueFormatForFormat:(id)a0;
+ (unsigned int)validatedDecimalPlaces:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFormatType:(unsigned int)a0;
- (void)encodeToArchive:(void *)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (void)encodeToArchive:(void *)a0 archivingCustomFormats:(BOOL)a1;
- (id)stringFromBool:(BOOL)a0 locale:(id)a1;
- (id)stringFromDate:(id)a0 locale:(id)a1;
- (id)stringFromDurationTimeInterval:(double)a0 locale:(id)a1;
- (id)stringFromString:(id)a0 locale:(id)a1;
- (BOOL)hasSimpleFormatType;

@end
