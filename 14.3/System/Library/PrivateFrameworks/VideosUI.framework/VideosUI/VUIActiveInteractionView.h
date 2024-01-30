@class UIContextMenuInteraction, UIView;
@protocol VUIContextMenuTemplateControllerInterface;

@interface VUIActiveInteractionView : NSObject

@property (weak, nonatomic) UIView *highlightedView;
@property (weak, nonatomic) UIContextMenuInteraction *activeInteraction;
@property (weak, nonatomic) id<VUIContextMenuTemplateControllerInterface> templateInterface;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
