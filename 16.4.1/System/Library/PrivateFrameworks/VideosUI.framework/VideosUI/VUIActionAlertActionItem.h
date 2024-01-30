@class NSString, NSDictionary, VUIAction;

@interface VUIActionAlertActionItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) VUIAction *action;
@property (retain, nonatomic) NSDictionary *metrics;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 action:(id)a1 metrics:(id)a2;

@end
