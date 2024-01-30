@class PTSettings, NSString, PTRowAction, UIImage, NSPredicate, PTSection, NSHashTable;

@interface PTRow : NSObject <PTSettingsKeyPathObserver, NSCopying, NSSecureCoding> {
    NSHashTable *_observers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) id /* block */ valueGetter;
@property (copy, nonatomic) id /* block */ valueSetter;
@property (copy, nonatomic) id /* block */ externalCondition;
@property (copy, nonatomic) id /* block */ unregisterBlock;
@property (weak, nonatomic) PTSection *section;
@property (nonatomic) BOOL isEncodable;
@property (retain, nonatomic) PTSettings *settings;
@property (retain, nonatomic) id value;
@property (copy, nonatomic) NSString *valueKeyPath;
@property (copy, nonatomic) NSString *staticTitle;
@property (copy, nonatomic) NSString *titleKeyPath;
@property (retain, nonatomic) UIImage *staticImage;
@property (copy, nonatomic) NSString *imageKeyPath;
@property (copy, nonatomic) NSPredicate *condition;
@property (retain, nonatomic) PTRowAction *action;
@property (copy, nonatomic) id /* block */ valueValidatator;
@property (copy, nonatomic) id /* block */ valueFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)row;
+ (id)rowWithTitle:(id)a0 valueKeyPath:(id)a1;
+ (id)rowWithTitle:(id)a0 valueGetter:(id /* block */)a1 valueSetter:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeObserver:(id)a0;
- (id)valueValidator:(id /* block */)a0;
- (void)dealloc;
- (id)action:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_defaultAction;
- (id)condition:(id)a0;
- (id)valueFormatter:(id /* block */)a0;
- (void)_sendValueChanged;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (id)titleKeyPath:(id)a0;
- (id)conditionFormat:(id)a0;
- (id)image;
- (id)title;
- (void)encodeWithCoder:(id)a0;
- (id)staticTitle:(id)a0;
- (id)valueKeyPath:(id)a0;
- (id)_validatedValue:(id)a0;
- (void)_sendRowDidReload;
- (void)_sendTitleChanged;
- (void)_sendImageChanged;
- (id)staticImage:(id)a0;
- (id)imageKeyPath:(id)a0;
- (id)childSettingsForKeyPath:(id)a0;
- (void)reloadRow;

@end
