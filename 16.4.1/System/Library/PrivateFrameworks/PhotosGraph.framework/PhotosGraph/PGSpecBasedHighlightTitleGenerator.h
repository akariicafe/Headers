@class NSString;

@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator

@property (readonly, nonatomic) NSString *meaningLabel;
@property (readonly, nonatomic) BOOL createVerboseTitle;

- (void).cxx_destruct;
- (void)_generateTitleAndSubtitleWithResult:(id /* block */)a0;
- (id)initWithCollection:(id)a0 meaningLabel:(id)a1 createVerboseTitle:(BOOL)a2 titleGenerationContext:(id)a3;
- (id)initWithMomentNodes:(id)a0 meaningLabel:(id)a1 createVerboseTitle:(BOOL)a2 titleGenerationContext:(id)a3;

@end
