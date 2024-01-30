@class NSArray;

@interface UITextReplacementGeneratorForMultilingualDictation : UITextReplacementGenerator

@property (readonly, nonatomic) NSArray *multilingualAlternatives;

- (id)replacements;
- (void).cxx_destruct;
- (id)initWithMultilingualAlternatives:(id)a0 stringToReplace:(id)a1 replacementRange:(id)a2;

@end
