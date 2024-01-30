@class CKComponent;

@interface WFActionTitleComponent : CKCompositeComponent {
    CKComponent *_leadingComponent;
    BOOL _enabled;
}

+ (id)newWithIcon:(id)a0 attributedTitle:(id)a1 enabled:(BOOL)a2 menuProvider:(id /* block */)a3;

- (void).cxx_destruct;

@end
