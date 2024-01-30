@class NSString, NSMutableDictionary;

@interface SXActionEngine : NSObject <SXActionProvider>

@property (readonly, nonatomic) NSMutableDictionary *additionFactories;
@property (readonly, nonatomic) NSMutableDictionary *hostNameFactories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)actionForURL:(id)a0;
- (id)actionForAddition:(id)a0;
- (void)registerFactory:(id)a0 additionType:(Class)a1;
- (void)registerFactory:(id)a0 URLHost:(id)a1;

@end
