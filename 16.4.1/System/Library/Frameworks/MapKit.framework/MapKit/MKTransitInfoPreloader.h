@class NSArray;

@interface MKTransitInfoPreloader : NSObject {
    NSArray *_transitLabels;
}

+ (id)attributedTextFromPreload:(id)a0 view:(id)a1;
+ (id)separatorImageWithLineHeight:(double)a0;

- (void).cxx_destruct;
- (id)initWithTransitLabels:(id)a0;
- (void)preloadWithCompletion:(id /* block */)a0;

@end
