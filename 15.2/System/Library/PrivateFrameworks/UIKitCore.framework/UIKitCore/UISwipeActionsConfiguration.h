@class NSArray;

@interface UISwipeActionsConfiguration : NSObject

@property (nonatomic, getter=_autosizesButtons, setter=_setAutosizesButtons:) BOOL autosizesButtons;
@property (nonatomic, getter=_swipeActionsStyle, setter=_setSwipeActionsStyle:) long long _swipeActionsStyle;
@property (nonatomic, getter=_roundedStyleCornerRadius, setter=_setRoundedStyleCornerRadius:) double _roundedStyleCornerRadius;
@property (readonly, copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL performsFirstActionWithFullSwipe;

+ (id)configurationWithActions:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
