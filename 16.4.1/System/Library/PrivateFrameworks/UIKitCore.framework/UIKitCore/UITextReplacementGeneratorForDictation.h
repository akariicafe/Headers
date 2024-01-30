@class NSTextAlternatives;

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator

@property (readonly, nonatomic) NSTextAlternatives *alternatives;

- (id)replacements;
- (void).cxx_destruct;
- (id)initWithAlternatives:(id)a0 stringToReplace:(id)a1 replacementRange:(id)a2;

@end
