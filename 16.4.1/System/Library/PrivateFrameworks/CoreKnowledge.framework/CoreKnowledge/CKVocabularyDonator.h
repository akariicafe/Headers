@class NSString, NSObject;
@protocol KVDonateServiceProvider;

@interface CKVocabularyDonator : NSObject {
    NSString *_originAppId;
    NSObject<KVDonateServiceProvider> *_serviceProvider;
}

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithOriginAppId:(id)a0 serviceProvider:(id)a1;
- (void)replaceAllVocabularyOfClass:(Class)a0 withVocabulary:(id)a1 completion:(id /* block */)a2;

@end
