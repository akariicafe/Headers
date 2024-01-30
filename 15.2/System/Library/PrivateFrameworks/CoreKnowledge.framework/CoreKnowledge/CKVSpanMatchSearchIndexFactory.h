@class NSString, CKVIndexManager, CKVSettings;

@interface CKVSpanMatchSearchIndexFactory : NSObject <CKVSpanMatchSearchIndexProvider> {
    CKVIndexManager *_indexManager;
    CKVSettings *_settings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
