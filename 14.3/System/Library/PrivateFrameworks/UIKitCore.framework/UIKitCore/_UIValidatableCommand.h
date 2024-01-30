@class UICommandAlternate, UICommand;

@interface _UIValidatableCommand : UICommand {
    UICommand *_command;
    UICommandAlternate *_alternate;
}

- (id)propertyList;
- (id)init;
- (void).cxx_destruct;
- (SEL)action;
- (void)useCommand:(id)a0 alternate:(id)a1;
- (id)alternates;

@end
