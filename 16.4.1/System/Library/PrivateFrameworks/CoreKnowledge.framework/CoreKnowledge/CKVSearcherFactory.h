@class NSObject;
@protocol CKVSearchServiceProvider;

@interface CKVSearcherFactory : NSObject <CKVSearcherProvider> {
    NSObject<CKVSearchServiceProvider> *_serviceProvider;
}

+ (id)sharedSearcherFactory;

- (id)initWithServiceProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)makeSearcherForUserId:(id)a0 prewarm:(BOOL)a1;

@end
