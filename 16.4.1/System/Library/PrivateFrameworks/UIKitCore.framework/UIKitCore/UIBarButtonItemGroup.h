@class NSString, UIMenuElement, NSArray, NSMutableArray, UIBarButtonItem;
@protocol _UIBarButtonItemGroupOwner;

@interface UIBarButtonItemGroup : NSObject <NSCoding> {
    NSMutableArray *_barButtonItems;
    NSString *_customizationIdentifier;
    struct { unsigned char hidden : 1; unsigned char locked : 1; unsigned char sendActionsBeforeDismiss : 1; unsigned char showInOverflow : 1; unsigned char customizationDisposition : 2; } _groupFlags;
    long long __calculationVisibility;
}

@property (readonly, nonatomic) BOOL _disabledExpansion;
@property (readonly, nonatomic) double _contextualExpandedPadding;
@property (weak, nonatomic, getter=_owner, setter=_setOwner:) id<_UIBarButtonItemGroupOwner> owner;
@property (copy, nonatomic) id /* block */ _notifyPrepareForLayout;
@property (copy, nonatomic) id /* block */ _notifyWillRequestMenuRepresentation;
@property (readonly, nonatomic, getter=_isCritical) BOOL _critical;
@property (readonly, nonatomic, getter=_isSystemGroup) BOOL systemGroup;
@property (nonatomic, getter=_expandStyle, setter=_setExpandStyle:) unsigned long long expandStyle;
@property (nonatomic, getter=_shouldAlwaysCollapse, setter=_setShouldAlwaysCollapse:) BOOL shouldAlwaysCollapse;
@property (readonly, copy, nonatomic) NSString *_dci_customizationIdentifier;
@property (readonly, nonatomic, getter=_dci_isInDefaultCustomization) BOOL _dci_inDefaultCustomization;
@property (copy, nonatomic, setter=_dci_setMenuRepresentation:) UIMenuElement *_dci_menuRepresentation;
@property (nonatomic, getter=_dci_isAvailableWithoutCustomization, setter=_dci_setAvailableWithoutCustomization:) BOOL _dci_availableWithoutCustomization;
@property (nonatomic, getter=_isHidden, setter=_setHidden:) BOOL _hidden;
@property (nonatomic, getter=_minimumLeadingSpace, setter=_setMinimumLeadingSpace:) double minimumLeadingSpace;
@property (nonatomic, getter=_minimumTrailingSpace, setter=_setMinimumTrailingSpace:) double minimumTrailingSpace;
@property (copy, nonatomic) NSArray *barButtonItems;
@property (retain, nonatomic) UIBarButtonItem *representativeItem;
@property (readonly, nonatomic, getter=isDisplayingRepresentativeItem) BOOL displayingRepresentativeItem;
@property (nonatomic) BOOL alwaysAvailable;
@property (copy, nonatomic) UIMenuElement *menuRepresentation;
@property (nonatomic, getter=isHidden) BOOL hidden;

+ (id)fixedGroupWithRepresentativeItem:(id)a0 items:(id)a1;
+ (id)movableGroupWithCustomizationIdentifier:(id)a0 representativeItem:(id)a1 items:(id)a2;
+ (id)optionalGroupWithCustomizationIdentifier:(id)a0 inDefaultCustomization:(BOOL)a1 representativeItem:(id)a2 items:(id)a3;

- (void)_validateAllItems;
- (void)_ib_setCustomizationDisposition:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBarButtonItems:(id)a0 representativeItem:(id)a1;
- (id)initWithCustomizationIdentifier_dci:(id)a0 representativeItem:(id)a1 items:(id)a2;
- (void)_removeBarButtonItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_sendNeedsToolbarUpdate;
- (id)_synthesizedMenuElements;
- (void)_ib_setCustomizationIdentifier:(id)a0;
- (id)initWithCustomizationIdentifier_dci:(id)a0 inDefaultCustomization:(BOOL)a1 representativeItem:(id)a2 items:(id)a3;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_removeRepresentative:(id)a0;

@end
