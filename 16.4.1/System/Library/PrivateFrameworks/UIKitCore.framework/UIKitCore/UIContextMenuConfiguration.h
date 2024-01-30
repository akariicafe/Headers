@class NSArray, NSSet, UIResponder, UITargetedPreview;
@protocol NSCopying;

@interface UIContextMenuConfiguration : NSObject

@property (copy, nonatomic) id<NSCopying> identifier;
@property (copy, nonatomic) id /* block */ previewProvider;
@property (copy, nonatomic) id /* block */ actionProvider;
@property (weak, nonatomic) UIResponder *firstResponderTarget;
@property (retain, nonatomic) UITargetedPreview *_primarySourcePreview;
@property (retain, nonatomic) NSArray *_secondarySourcePreviews;
@property (retain, nonatomic) id _internalIdentifier;
@property (retain, nonatomic) NSSet *_internalSecondaryItemIdentifiers;
@property (readonly, nonatomic) id _effectiveInternalIdentifier;
@property (readonly, nonatomic) NSSet *_effectiveSecondaryItemIdentifiers;
@property (readonly, nonatomic) BOOL _clientDidSetBadgeCount;
@property (readonly, nonatomic) BOOL _isMultiItemMenu;
@property (copy, nonatomic) NSArray *_dci_secondaryItemIdentifiers;
@property (nonatomic) long long _dci_badgeCount;
@property (copy, nonatomic) NSSet *secondaryItemIdentifiers;
@property (nonatomic) long long badgeCount;
@property (nonatomic) long long preferredMenuElementOrder;

+ (id)configurationWithIdentifier:(id)a0 previewProvider:(id /* block */)a1 actionProvider:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_isCollectionViewBackgroundMenu;

@end
