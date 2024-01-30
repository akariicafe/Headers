@class NSArray, NSString;
@protocol UIMenuForcedAutomaticSelectionDelegate;

@interface UIMenu : UIMenuElement <UIMenuSelectable, _UIMenuElementStateObserver>

@property (nonatomic) struct { BOOL isPreparedForDisplay; BOOL hasVisibleSelectedItem; BOOL hasDeepHierarchy; BOOL hasAtLeastOneVisibleItem; } metadata;
@property (nonatomic) BOOL forceAutomaticSelection;
@property (weak, nonatomic) id<UIMenuForcedAutomaticSelectionDelegate> forcedAutomaticSelectionDelegate;
@property (readonly, copy, nonatomic) NSArray *_selectedElements;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSArray *selectedElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)menuWithTitle:(id)a0 imageName:(id)a1 identifier:(id)a2 options:(unsigned long long)a3 children:(id)a4;
+ (id)_defaultInlineMenuWithIdentifier:(id)a0 children:(id)a1;
+ (id)menuWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 options:(unsigned long long)a3 children:(id)a4;
+ (id)_defaultMenuWithIdentifier:(id)a0 children:(id)a1;
+ (id)_defaultMenuTitles;
+ (id)menuWithTitle:(id)a0 children:(id)a1;
+ (id)menuWithChildren:(id)a0;

- (id)_spiRepresentation;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2 identifier:(id)a3 options:(unsigned long long)a4 children:(id)a5;
- (void)encodeWithCoder:(id)a0;
- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_immutableCopy;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (void)updateChildrenForSingleSelectedElement:(id)a0;
- (id)recurisvelySelectDefaultForcedSelection;
- (id)_mutableCopy;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)establishInitialDefaultSingleSelection;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_immutableCopySharingLeafObservers:(BOOL)a0;
- (void)addAsStateObserver;
- (id)initWithMenu:(id)a0 overrideChildren:(id)a1;
- (id)menuByReplacingChildren:(id)a0;
- (id)childElementForElement:(id)a0;
- (void)removeAsStateObserver;
- (void)_elementStateDidChange:(id)a0;
- (void)_elementWillPerformAction:(id)a0;

@end
