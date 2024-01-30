@class NSString;

@interface POPPlaceholderAnimatableProperty : POPAnimatableProperty {
    NSString *name;
    id /* block */ readBlock;
    id /* block */ writeBlock;
    double threshold;
}

- (double)threshold;
- (void).cxx_destruct;
- (id)name;
- (id /* block */)writeBlock;
- (id /* block */)readBlock;

@end
