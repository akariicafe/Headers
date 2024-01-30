@class NSString, NSLinguisticTagger;

@interface SGTokenizerMappingTransformer : NSObject <PMLTransformerProtocol> {
    NSLinguisticTagger *_tagger;
    BOOL _nameTagging;
    BOOL _trustCoreNLP;
    NSString *_punctuationMapping;
    NSString *_personalNameMapping;
    NSString *_locale;
    void *_nlpTagger;
    int _linguisticDataNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)forLocale:(id)a0;
+ (id)forLocale:(id)a0 withPersonalNameMapping:(id)a1;
+ (id)forLocale:(id)a0 tagNames:(BOOL)a1 personalNameMapping:(id)a2 punctuationMapping:(id)a3;
+ (id)forLocale:(id)a0 tagNames:(BOOL)a1 trustCoreNLP:(BOOL)a2 personalNameMapping:(id)a3 punctuationMapping:(id)a4;

- (void)_registerForNotifications;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)transform:(id)a0;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (id)initForLocale:(id)a0 tagNames:(BOOL)a1 trustCoreNLP:(BOOL)a2 personalNameMapping:(id)a3 punctuationMapping:(id)a4;
- (void)transformWithCoreNLP:(id)a0 block:(id /* block */)a1;
- (void)transformWithNLLinguisticTagger:(id)a0 block:(id /* block */)a1;
- (BOOL)isEqualToTokenizerMappingTransformer:(id)a0;

@end
