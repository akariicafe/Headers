@interface POPStaticAnimatableProperty : POPAnimatableProperty {
    struct { id x0; id /* block */ x1; id /* block */ x2; double x3; } *_state;
}

- (double)threshold;
- (id)name;
- (id /* block */)writeBlock;
- (id /* block */)readBlock;

@end
