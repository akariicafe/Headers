@class NSString, NSMutableArray, TSUCustomFormatData;

@interface TSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {
    NSString *_formatNameStem;
    NSString *_formatNameTag;
    NSString *_currencyCode;
    BOOL _currencyCodeComputed;
}

@property (readonly, nonatomic) NSMutableArray *conditionList;
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) TSUCustomFormatData *defaultFormatData;
@property (readonly, nonatomic) unsigned long long conditionCount;
@property (readonly, nonatomic) NSString *formatName;
@property (readonly, nonatomic) NSString *formatNameStem;
@property (readonly, nonatomic) NSString *formatNameTag;
@property (readonly, nonatomic) BOOL conditionsAllowed;
@property (readonly, nonatomic) NSString *currencyCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 formatType:(unsigned int)a1 data:(id)a2 conditionList:(id)a3;
- (id)initWithName:(id)a0 formatType:(unsigned int)a1 data:(id)a2;
- (void)p_addConditionOfType:(int)a0 value:(double)a1 data:(id)a2;
- (void)p_makeFormatNameStemAndTag;
- (BOOL)p_isEqual:(id)a0 matchingFullName:(BOOL)a1;
- (id)conditionalFormatDataForValue:(double)a0 outKey:(unsigned long long *)a1;
- (id)conditionalFormatAtIndex:(unsigned long long)a0;
- (id)customFormatWithNewName:(id)a0;
- (BOOL)isEqualWithStemNameMatching:(id)a0;
- (id)conditionalFormatDataForValue:(double)a0;
- (id)conditionalFormatDataForKey:(unsigned long long)a0;
- (void)p_setFormatType:(unsigned int)a0;

@end
