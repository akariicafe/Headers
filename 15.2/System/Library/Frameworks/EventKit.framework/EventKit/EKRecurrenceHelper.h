@class NSString, NSArray;

@interface EKRecurrenceHelper : NSObject {
    NSString *_specifier;
    BOOL _dirty;
    BOOL _parsed;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
}

@property (readonly, nonatomic) BOOL isDirty;
@property (copy, nonatomic) NSString *specifier;
@property (copy, nonatomic) NSArray *daysOfTheWeek;
@property (copy, nonatomic) NSArray *daysOfTheMonth;
@property (copy, nonatomic) NSArray *daysOfTheYear;
@property (copy, nonatomic) NSArray *weeksOfTheYear;
@property (copy, nonatomic) NSArray *monthsOfTheYear;
@property (copy, nonatomic) NSArray *setPositions;

- (void)revert;
- (void)_clearArrays;
- (void)_updateSpecifier;
- (void)_parseSpecifierIfNeeded;
- (void)_appendDaysOfTheWeek:(id)a0 toSpecifier:(id)a1;
- (void)_appendIndexList:(id)a0 toSpecifier:(id)a1 propertyKey:(unsigned short)a2;
- (id)_parseDaysOfWeek:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *)a0 range:(struct { long long x0; long long x1; })a1;
- (id)_parseIndexList:(struct { unsigned short x0[64]; struct __CFString *x1; unsigned short *x2; char *x3; struct { long long x0; long long x1; } x4; long long x5; long long x6; } *)a0 range:(struct { long long x0; long long x1; })a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSpecifier:(id)a0;

@end
