@class NSSet;

@interface SBOverridePresentationValueSwitcherModifier : SBSwitcherModifier {
    NSSet *_keys;
    double _presentationValue;
}

- (double)presentationValueForAnimatableProperty:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnimatablePropertyKeys:(id)a0 presentationValue:(double)a1;

@end
