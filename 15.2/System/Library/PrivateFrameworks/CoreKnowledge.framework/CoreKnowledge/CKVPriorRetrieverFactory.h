@class NSString, CKVSettings;

@interface CKVPriorRetrieverFactory : NSObject <CKVPriorRetrieverProvider> {
    CKVSettings *_settings;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSettings:(id)a0;
- (void).cxx_destruct;
- (id)getPriorRetriever;

@end
