@interface LTUIVisualTranslationService : NSObject

+ (void)isTranslatable:(id)a0 completion:(id /* block */)a1;
+ (id)compactObservations:(id)a0;

- (void)translate:(id)a0 completion:(id /* block */)a1;
- (void)translate:(id)a0 sourceLocale:(id)a1 targetLocale:(id)a2 completion:(id /* block */)a3;
- (void)translate:(id)a0 targetLocale:(id)a1 completion:(id /* block */)a2;

@end
