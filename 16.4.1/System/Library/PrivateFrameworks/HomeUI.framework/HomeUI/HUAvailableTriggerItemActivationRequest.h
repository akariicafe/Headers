@class NAFuture, HUAvailableTriggerItem;

@interface HUAvailableTriggerItemActivationRequest : NSObject

@property (weak, nonatomic) HUAvailableTriggerItem *item;
@property (retain, nonatomic) NAFuture *completionFuture;
@property (nonatomic) BOOL active;

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 active:(BOOL)a1;
- (BOOL)isSameAsRequest:(id)a0;

@end
