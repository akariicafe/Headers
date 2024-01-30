@class PPNamedEntityStore, PPContactStore, PPContactNameRecordLoadingDelegate, _ICLexiconManager, PPNamedEntityRecordLoadingDelegate;

@interface _ICPortraitLexiconSource : NSObject <_ICLexiconSourcing, _ICFeedbackAccepting> {
    _ICLexiconManager *_manager;
    PPContactStore *_contactStore;
    PPContactNameRecordLoadingDelegate *_contactDelegate;
    PPNamedEntityStore *_namedEntityStore;
    PPNamedEntityRecordLoadingDelegate *_namedEntityDelegate;
}

- (void)warmUp;
- (id)init;
- (void).cxx_destruct;
- (void)_reloadNamedEntityDataAfterReset;
- (id)_makePPNamedEntityStore;
- (void)hibernate;
- (void)startLoadingWithManager:(id)a0;
- (id)_makeContactDelegate;
- (id)_makeNamedEntityDelegate;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;

@end
