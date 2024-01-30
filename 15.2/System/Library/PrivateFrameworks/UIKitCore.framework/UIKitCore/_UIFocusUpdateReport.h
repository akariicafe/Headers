@class UIFocusUpdateContext, UIFocusSystem;

@interface _UIFocusUpdateReport : NSObject

@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (retain, nonatomic) UIFocusUpdateContext *context;
@property (readonly, nonatomic) BOOL shouldLog;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFocusSystem:(id)a0;

@end
