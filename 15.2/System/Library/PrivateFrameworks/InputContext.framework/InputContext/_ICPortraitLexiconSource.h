@class PPNamedEntityStore, PPContactStore, PPContactNameRecordLoadingDelegate, _ICLexiconManager, PPNamedEntityRecordLoadingDelegate;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting> {
    _ICLexiconManager *_manager;
    PPContactStore *_contactStore;
    PPContactNameRecordLoadingDelegate *_contactDelegate;
    PPNamedEntityStore *_namedEntityStore;
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;
}

- (void)warmUp;
- (id)_makeContactDelegate;
- (void)hibernate;
- (void).cxx_destruct;
- (id)_makePPNamedEntityStore;
- (id)init;
- (void)startLoadingWithManager:(id)a0;
- (id)_makeNamedEntityDelegate;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;

@end
