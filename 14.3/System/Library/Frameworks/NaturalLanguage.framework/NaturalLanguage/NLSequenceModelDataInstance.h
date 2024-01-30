@class NSArray;

@interface NLSequenceModelDataInstance : NLDataInstance {
    NSArray *_tokens;
    NSArray *_labels;
}

+ (id)readInstancesFromString:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1;

- (id)tokens;
- (void).cxx_destruct;
- (id)string;
- (id)labels;
- (id)label;
- (id)initWithTokens:(id)a0 labels:(id)a1;
- (struct __CFDictionary { } *)instanceDictionary;
- (id)initWithLine:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1;
- (id)formattedLineWithLabelMap:(id)a0 vocabularyMap:(id)a1;
- (id)locatorsWithIndex:(unsigned long long)a0 parameters:(struct _NLConstraintParameters { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a1 tagger:(id)a2 tokenizer:(struct __CFStringTokenizer { } *)a3;
- (id)subInstanceWithLocator:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1;

@end
