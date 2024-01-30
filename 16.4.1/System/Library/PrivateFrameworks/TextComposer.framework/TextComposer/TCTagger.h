@class NSString;

@interface TCTagger : NLTagger {
    NSString *_language;
}

@property (readonly, copy) NSString *language;
@property unsigned long long maximumTokenCount;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionForFlags:(unsigned long long)a0;
- (void)enumerateSentencesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (id)sentenceTerminatorCharacterSet;
- (void)setString:(id)a0 language:(id)a1;

@end
