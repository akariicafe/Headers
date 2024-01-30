@class UICommandAlternate, UICommand;

@interface _UIValidatableCommand : UICommand {
    UICommand *_command;
    UICommandAlternate *_alternate;
}

- (id)propertyList;
- (id)init;
- (SEL)action;
- (void).cxx_destruct;
- (id)alternates;
- (void)useCommand:(id)a0 alternate:(id)a1;

@end
