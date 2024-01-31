@interface CKBalloonViewAccessibility : __CKBalloonViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityCustomActions;
- (BOOL)isAccessibilityElement;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityTextualContext;
- (id)_axAcknowledgmentDescription;
- (id)_axBalloonViewCustomActions;
- (id)_axBuddyNameForBalloon;
- (id)_axChatItemForBalloon;
- (id)_axDigitalTouchDescription;
- (id)_axHighlightedDescription;
- (BOOL)_axIsBalloonOfType:(id)a0;
- (BOOL)_axIsDigitalTouch;
- (BOOL)_axIsImessage;
- (BOOL)_axIsInNotification;
- (BOOL)_axIsMessageFromMe;
- (BOOL)_axIsTextMessage;
- (id)_axMessageForBalloon;
- (id)_axMessageSender;
- (id)_axMessageTime;
- (id)_axStickerDescription;
- (void)_axTapback;
- (void)axPerformInterfaceAction:(id)a0;

@end
