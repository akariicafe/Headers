@interface UIInputViewSetPlacementInvisibleAssistantBar : UIInputViewSetPlacementInvisible <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)applicatorInfoForOwner:(id)a0;
- (BOOL)isFloatingAssistantView;
- (BOOL)isCompactAssistantView;

@end
