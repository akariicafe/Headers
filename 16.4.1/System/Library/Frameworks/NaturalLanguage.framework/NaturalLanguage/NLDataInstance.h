@class NSString, NSArray;

@interface NLDataInstance : NSObject

@property (readonly, copy) NSString *string;
@property (readonly, copy) NSString *label;
@property (readonly, copy) NSArray *tokens;
@property (readonly, copy) NSArray *labels;

- (id)formattedLineWithLabelMap:(id)a0 vocabularyMap:(id)a1;
- (id)initWithLine:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1;
- (id)initWithString:(id)a0 label:(id)a1;
- (struct __CFDictionary { } *)instanceDictionary;
- (id)locatorsWithIndex:(unsigned long long)a0 parameters:(struct _NLConstraintParameters { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a1 tagger:(id)a2 tokenizer:(struct __CFStringTokenizer { } *)a3;
- (id)subInstanceWithLocator:(id)a0 tokenizer:(struct __CFStringTokenizer { } *)a1;

@end
