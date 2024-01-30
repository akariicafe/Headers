@class NSString, _UIPointerInteractionAssistant, UINavigationItem, UIView;

@interface _UINavigationBarPalette : UIView <UIPointerInteractionDelegate, _UINavigationBarLayoutParticipating>

@property (copy, nonatomic) NSString *assistantIdentifier;
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant;
@property (nonatomic) BOOL transitioning;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (weak, nonatomic) UINavigationItem *owningNavigationItem;
@property (nonatomic, setter=_setContentViewMarginType:) unsigned long long _contentViewMarginType;
@property (nonatomic, setter=_setDisplaysWhenSearchActive:) BOOL _displaysWhenSearchActive;
@property (nonatomic, setter=_setLayoutPriority:) long long _layoutPriority;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic) double preferredHeight;
@property (nonatomic) double minimumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLayoutData:(id)a0 layoutWidth:(double)a1;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)_clearAssistants;
- (void)_setAssistants;
- (id)initWithContentView:(id)a0;
- (void)addSubview:(id)a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;

@end
