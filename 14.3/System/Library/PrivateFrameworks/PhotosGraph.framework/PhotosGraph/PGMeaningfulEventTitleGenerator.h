@class NSString;

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator {
    NSString *_meaningLabel;
    BOOL _meaningIsReliable;
}

- (void).cxx_destruct;
- (id)_title;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)_meaningLabelForTitle;
- (id)_timeTitle;
- (id)initWithCollection:(id)a0 meaningLabel:(id)a1 meaningIsReliable:(BOOL)a2;

@end
