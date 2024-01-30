@class NSString, CKVSettings, CKVPriorRetrieverFactory;

@interface CKVSpanMatchResultInterpreterFactory : NSObject <CKVSpanMatchResultInterpreterProvider> {
    CKVSettings *_settings;
    CKVPriorRetrieverFactory *_priorRetrieverFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
