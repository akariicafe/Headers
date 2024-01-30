@interface UIInputViewSetPlacementInvisibleAssistantBar : UIInputViewSetPlacementInvisible <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isFloatingAssistantView;
- (id)applicatorInfoForOwner:(id)a0;
- (BOOL)isCompactAssistantView;

@end
