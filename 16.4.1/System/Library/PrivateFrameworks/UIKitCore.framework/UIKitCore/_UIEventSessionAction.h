@class _UIEventSessionTapAction, NSString, _UIEventSessionKeyCommandAction, _UIEventSessionTypingAction, _UIEventSessionTextSelectionAction, _UIEventSessionTouchAction, _UIEventSessionScrollAction, _UIEventSessionHoverAction, _UIEventSessionContextualAction, NSNumber;

@interface _UIEventSessionAction : NSObject <NSCopying>

@property (nonatomic) long long source;
@property (nonatomic) long long actionType;
@property (readonly, nonatomic) _UIEventSessionTouchAction *asTouch;
@property (readonly, nonatomic) _UIEventSessionTapAction *asTap;
@property (readonly, nonatomic) _UIEventSessionScrollAction *asScroll;
@property (readonly, nonatomic) _UIEventSessionContextualAction *asContextualPress;
@property (readonly, nonatomic) _UIEventSessionTypingAction *asTyping;
@property (readonly, nonatomic) _UIEventSessionTextSelectionAction *asTextSelection;
@property (readonly, nonatomic) _UIEventSessionKeyCommandAction *asKeyCommand;
@property (readonly, nonatomic) _UIEventSessionHoverAction *asHover;
@property (retain, nonatomic) NSNumber *sessionID;
@property (nonatomic) long long uiInterfaceOrientation;
@property (nonatomic) long long magicKeyboardState;
@property (nonatomic) long long hardwareKeyboardState;
@property (nonatomic) long long sequenceNumber;
@property (readonly, nonatomic) NSString *typeEncoding;
@property (readonly, nonatomic) NSString *metadata;
@property (readonly, nonatomic) long long actionCount;
@property (nonatomic) long long actionCountFromMergedActions;

+ (id)stringValueForSource:(long long)a0;
+ (long long)getUIEventSourceForUITouchType:(long long)a0;
+ (id)stringValueForActionType:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (long long)mergeActionIfPossible:(id)a0;

@end
