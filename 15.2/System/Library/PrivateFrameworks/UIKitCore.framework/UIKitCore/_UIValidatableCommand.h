@class UICommandAlternate, UICommand;

@interface _UIValidatableCommand : UICommand {
    UICommand *_command;
    UICommandAlternate *_alternate;
}

- (id)propertyList;
- (id)alternates;
- (void).cxx_destruct;
- (id)init;
- (void)useCommand:(id)a0 alternate:(id)a1;
- (SEL)action;

@end
