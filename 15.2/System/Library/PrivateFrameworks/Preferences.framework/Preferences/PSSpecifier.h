@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface PSSpecifier : NSObject {
    SEL getter;
    SEL setter;
    SEL action;
    SEL cancel;
    long long keyboardType;
    long long autoCapsType;
    long long autoCorrectionType;
    unsigned long long textFieldType;
    NSMutableDictionary *_properties;
}

@property (retain, nonatomic) NSArray *values;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id userInfo;
@property (weak, nonatomic) id weakUserInfo;
@property (retain, nonatomic) NSDictionary *titleDictionary;
@property (retain, nonatomic) NSDictionary *shortTitleDictionary;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id target;
@property (nonatomic) Class detailControllerClass;
@property (nonatomic) long long cellType;
@property (nonatomic) Class editPaneClass;
@property (nonatomic) SEL confirmationAction;
@property (nonatomic) SEL confirmationAlternateAction;
@property (nonatomic) SEL confirmationCancelAction;
@property (nonatomic) SEL buttonAction;
@property (nonatomic) SEL controllerLoadAction;
@property (nonatomic) BOOL showContentString;

+ (id)groupSpecifierWithID:(id)a0;
+ (id)groupSpecifierWithID:(id)a0 name:(id)a1;
+ (id)specifierWithSpecifier:(id)a0;
+ (long long)autoCorrectionTypeForNumber:(id)a0;
+ (long long)autoCapsTypeForString:(id)a0;
+ (long long)keyboardTypeForString:(id)a0;
+ (id)deleteButtonSpecifierWithName:(id)a0 target:(id)a1 action:(SEL)a2;
+ (id)emptyGroupSpecifier;
+ (id)groupSpecifierWithName:(id)a0;
+ (id)preferenceSpecifierNamed:(id)a0 target:(id)a1 set:(SEL)a2 get:(SEL)a3 detail:(Class)a4 cell:(long long)a5 edit:(Class)a6;

- (void)setProperty:(id)a0 forKey:(id)a1;
- (void)removePropertyForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)performGetter;
- (void)setLegacyCancel:(SEL)a0;
- (BOOL)hasValidSetter;
- (BOOL)hasValidGetter;
- (void)setValues:(id)a0 titles:(id)a1 shortTitles:(id)a2;
- (void)performSetterWithValue:(id)a0;
- (long long)titleCompare:(id)a0;
- (void)loadValuesAndTitlesFromDataSource;
- (void)setValues:(id)a0 titles:(id)a1 shortTitles:(id)a2 usingLocalizedTitleSorting:(BOOL)a3;
- (void)setupIconImageWithBundle:(id)a0;
- (id)description;
- (id)properties;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqualToSpecifier:(id)a0;
- (void)_addLinkSpec:(id)a0;
- (void)addFooterHyperlinkWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 url:(id)a1;
- (void)addFooterHyperlinkWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 target:(id)a1 action:(SEL)a2;
- (void)setProperties:(id)a0;
- (void)setValues:(id)a0 titles:(id)a1;
- (void)setKeyboardType:(long long)a0 autoCaps:(long long)a1 autoCorrection:(long long)a2;
- (id)propertyForKey:(id)a0;
- (id)initWithName:(id)a0 target:(id)a1 set:(SEL)a2 get:(SEL)a3 detail:(Class)a4 cell:(long long)a5 edit:(Class)a6;
- (SEL)legacyCancel;
- (SEL)legacyAction;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setLegacyAction:(SEL)a0;
- (void)performLegacyAction;
- (void)performControllerLoadAction;
- (void)performButtonAction;
- (void)performConfirmationAction;
- (void)performConfirmationAlternateAction;
- (void)performConfirmationCancelAction;
- (void)setupIconImageWithPath:(id)a0;

@end
