@class NSArray, NSSet, NSString;
@protocol WFPropertyListObject;

@interface WFContentProperty : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *possibleLabels;
@property (readonly, nonatomic) Class valueItemClass;
@property (readonly, copy, nonatomic) NSSet *allowedTransactionModes;
@property (copy, nonatomic) NSArray *possibleValues;
@property (copy, nonatomic) id /* block */ possibleValuesGetter;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, copy, nonatomic) id /* block */ setterBlock;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *localizedSingularItemName;
@property (readonly, copy, nonatomic) NSString *singularItemName;
@property (readonly, nonatomic) BOOL canLowercaseName;
@property (readonly, nonatomic) Class propertyClass;
@property (readonly, nonatomic) BOOL multipleValues;
@property (readonly, nonatomic, getter=isFilterable) BOOL filterable;
@property (readonly, nonatomic, getter=isSortable) BOOL sortable;
@property (readonly, nonatomic, getter=isGettable) BOOL gettable;
@property (readonly, nonatomic, getter=isSettable) BOOL settable;
@property (readonly, nonatomic, getter=isAppendable) BOOL appendable;
@property (readonly, nonatomic, getter=isRemovable) BOOL removable;
@property (readonly, nonatomic, getter=isPrimary) BOOL primary;
@property (readonly, copy, nonatomic) NSArray *allowedOperators;
@property (readonly, copy, nonatomic) id<WFPropertyListObject> userInfo;
@property (readonly, nonatomic) BOOL hasPossibleValues;
@property (readonly, nonatomic) BOOL caseInsensitive;
@property (readonly, nonatomic) BOOL hasNegative;
@property (readonly, copy, nonatomic) NSString *negativeName;
@property (readonly, copy, nonatomic) NSString *localizedNegativeName;
@property (readonly, nonatomic, getter=isIrrational) BOOL irrational;
@property (readonly, nonatomic) unsigned long long tense;
@property (readonly, nonatomic) unsigned long long timeUnits;
@property (readonly, nonatomic) unsigned long long comparableUnits;
@property (readonly, nonatomic) NSString *measurementUnitType;
@property (readonly, nonatomic, getter=isLabeledValue) BOOL labeledValue;
@property (readonly, nonatomic) NSString *displayName;

+ (id)possibleLabelsForClass:(Class)a0 localized:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)getPossibleValues:(id /* block */)a0;
- (void)getValuesForObject:(id)a0 completionHandler:(id /* block */)a1;
- (id)preferredTransactionModeWithCurrentMode:(id)a0;
- (void)updateWithValue:(id)a0 withTransaction:(id)a1 completion:(id /* block */)a2;
- (unsigned long long)equivalentHash;
- (void)getValueForObject:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithKeyPath:(id)a0 block:(id /* block */)a1 setterBlock:(id /* block */)a2 name:(id)a3 propertyClass:(Class)a4 multipleValues:(BOOL)a5 filterable:(BOOL)a6 sortable:(BOOL)a7 gettable:(BOOL)a8 settable:(BOOL)a9 appendable:(BOOL)a10 removable:(BOOL)a11 primary:(BOOL)a12 allowedOperators:(id)a13 userInfo:(id)a14 possibleValues:(id)a15 possibleValuesGetter:(id /* block */)a16 caseInsensitive:(BOOL)a17 negativeName:(id)a18 singularItemName:(id)a19 irrational:(BOOL)a20 tense:(unsigned long long)a21 timeUnits:(unsigned long long)a22 comparableUnits:(unsigned long long)a23 measurementUnitType:(id)a24 displayName:(id)a25 canLowercaseName:(BOOL)a26;
- (BOOL)isEquivalentToProperty:(id)a0;

@end
