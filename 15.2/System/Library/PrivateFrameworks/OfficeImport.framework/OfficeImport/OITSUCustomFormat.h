@class OITSUCustomFormatData, NSMutableArray, NSString;

@interface OITSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {
    NSString *_formatNameStem;
    NSString *_formatNameTag;
    NSString *_currencyCode;
    BOOL _currencyCodeComputed;
}

@property (readonly, nonatomic) NSMutableArray *conditionList;
@property (readonly, nonatomic) int formatType;
@property (readonly, nonatomic) OITSUCustomFormatData *defaultFormatData;
@property (readonly, nonatomic) unsigned long long conditionCount;
@property (readonly, nonatomic) NSString *formatName;
@property (readonly, nonatomic) NSString *formatNameStem;
@property (readonly, nonatomic) NSString *formatNameTag;
@property (readonly, nonatomic) NSString *currencyCode;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithName:(id)a0 formatType:(int)a1 data:(id)a2 conditionList:(id)a3;
- (id)initWithName:(id)a0 formatType:(int)a1 data:(id)a2;
- (void)p_addConditionOfType:(int)a0 value:(double)a1 data:(id)a2;
- (void)p_makeFormatNameStemAndTag;
- (BOOL)p_isEqual:(id)a0 matchingFullName:(BOOL)a1;
- (id)conditionalFormatDataForValue:(double)a0 outKey:(unsigned long long *)a1;
- (id)conditionalFormatAtIndex:(unsigned long long)a0;
- (id)customFormatWithNewName:(id)a0;
- (BOOL)isEqualWithStemNameMatching:(id)a0;
- (id)conditionalFormatDataForValue:(double)a0;
- (id)conditionalFormatDataForKey:(unsigned long long)a0;

@end
