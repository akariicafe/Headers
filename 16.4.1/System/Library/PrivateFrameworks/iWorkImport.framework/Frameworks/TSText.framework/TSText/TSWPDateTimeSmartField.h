@class NSString, NSDate;

@interface TSWPDateTimeSmartField : TSWPSmartField {
    NSString *_format;
    NSString *_localeID;
    long long _dateStyle;
    long long _timeStyle;
    int _updatePlan;
    BOOL _needsUpdate;
    NSDate *_date;
}

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *localeIdentifier;
@property (nonatomic) long long dateStyle;
@property (nonatomic) long long timeStyle;
@property (nonatomic) int updatePlan;
@property (nonatomic) BOOL needsUpdate;

+ (id)dateStringFromTime:(double)a0 withFormat:(id)a1 localeIdentifier:(id)a2 dateStyle:(long long)a3 timeStyle:(long long)a4;
+ (id)newDateFormatWithLocaleIdentifier:(id)a0 dateStyle:(long long)a1 timeStyle:(long long)a2;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (id)generateInlineText;
- (id)initWithLocaleIdentifier:(id)a0 dateStyle:(long long)a1 timeStyle:(long long)a2 autoUpdate:(BOOL)a3 context:(id)a4;
- (id)initWithLocaleIdentifier:(id)a0 dateStyle:(long long)a1 timeStyle:(long long)a2 format:(id)a3 autoUpdate:(BOOL)a4 context:(id)a5;
- (id)initWithLocaleIdentifier:(id)a0 dateStyle:(long long)a1 timeStyle:(long long)a2 format:(id)a3 date:(id)a4 updatePlan:(int)a5 context:(id)a6;
- (void)p_setFormat:(id)a0 localeIdentifier:(id)a1 dateStyle:(long long)a2 timeStyle:(long long)a3 autoLocale:(BOOL)a4;
- (void)resetLocaleTo:(id)a0;
- (void)setFormat:(id)a0 localeIdentifier:(id)a1 dateStyle:(long long)a2 timeStyle:(long long)a3;
- (unsigned short)smartFieldKind;
- (BOOL)supportsDeepCopyForUndo;

@end
