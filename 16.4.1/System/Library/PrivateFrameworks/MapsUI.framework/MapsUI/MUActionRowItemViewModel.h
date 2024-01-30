@class NSString, UIColor, GEOObserverHashTable;

@interface MUActionRowItemViewModel : NSObject {
    GEOObserverHashTable *_observers;
}

@property (readonly, nonatomic) NSString *titleText;
@property (readonly, nonatomic) NSString *symbolName;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) NSString *accessibilityIdentifier;
@property (readonly, nonatomic) UIColor *preferredTintColor;
@property (readonly, nonatomic) UIColor *preferredBackgroundColor;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_notifyObservers;
- (void).cxx_destruct;
- (id)analyticsButtonValue;
- (id)analyticsButtonValues;
- (id)buildMenuWithPresentationOptions:(id)a0;

@end
