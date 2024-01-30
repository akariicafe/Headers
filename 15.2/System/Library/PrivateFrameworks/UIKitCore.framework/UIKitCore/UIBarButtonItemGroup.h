@class NSArray, _UIButtonGroupViewController, NSMutableArray, UIBarButtonItem;
@protocol _UIBarButtonItemGroupOwner;

@interface UIBarButtonItemGroup : NSObject <NSCoding> {
    NSMutableArray *_barButtonItems;
}

@property (nonatomic, getter=_priority, setter=_setPriority:) float priority;
@property (readonly, nonatomic, getter=_items) NSArray *items;
@property (weak, nonatomic, getter=_owner, setter=_setOwner:) id<_UIBarButtonItemGroupOwner> owner;
@property (retain, nonatomic, getter=_representativeUI, setter=_setRepresentativeUI:) _UIButtonGroupViewController *representativeUI;
@property (nonatomic, getter=_isLocked, setter=_setLocked:) BOOL locked;
@property (nonatomic, getter=_sendActionsBeforeDismiss, setter=_setSendActionsBeforeDismiss:) BOOL sendActionsBeforeDismiss;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL hidden;
@property (readonly, nonatomic, getter=_isSystemGroup) BOOL systemGroup;
@property (nonatomic, getter=_minimumLeadingSpace, setter=_setMinimumLeadingSpace:) double minimumLeadingSpace;
@property (nonatomic, getter=_minimumTrailingSpace, setter=_setMinimumTrailingSpace:) double minimumTrailingSpace;
@property (nonatomic, getter=_expandStyle, setter=_setExpandStyle:) unsigned long long expandStyle;
@property (nonatomic, getter=_shouldAlwaysCollapse, setter=_setShouldAlwaysCollapse:) BOOL shouldAlwaysCollapse;
@property (copy, nonatomic) NSArray *barButtonItems;
@property (retain, nonatomic) UIBarButtonItem *representativeItem;
@property (readonly, nonatomic, getter=isDisplayingRepresentativeItem) BOOL displayingRepresentativeItem;

- (void)_removeBarButtonItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_removeRepresentative:(id)a0;
- (id)description;
- (id)initWithBarButtonItems:(id)a0 representativeItem:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)_validateAllItems;

@end
