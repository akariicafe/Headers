@class NSDictionary, NSURL, NSData, NLParameterBundle;

@interface PRDictionary : NSObject {
    NSURL *_url;
    NSData *_data;
    NSDictionary *_offsetsDictionary;
    NSDictionary *_numEntriesDictionary;
    NSDictionary *_dictionariesDictionary;
    NLParameterBundle *_parameterBundle;
    NLParameterBundle *_transformerParameterBundle;
    PRDictionary *_fallbackDictionary;
}

- (void)dealloc;
- (id)description;
- (id)parameterBundle;
- (BOOL)checkWordBuffer:(char *)a0 length:(unsigned long long)a1 encoding:(unsigned int)a2 index:(unsigned long long)a3 caseInsensitive:(BOOL)a4;
- (id)dictionaryAtIndex:(unsigned long long)a0;
- (id)fallbackDictionary;
- (id)initWithURL:(id)a0 fallbackURL:(id)a1;
- (id)transformerParameterBundle;

@end
