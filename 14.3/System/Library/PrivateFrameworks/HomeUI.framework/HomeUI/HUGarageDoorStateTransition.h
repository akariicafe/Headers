@interface HUGarageDoorStateTransition : NSObject

@property (nonatomic) BOOL fromOpenState;
@property (nonatomic) BOOL toOpenState;

+ (id)transitionFromState:(BOOL)a0 toState:(BOOL)a1;

@end
