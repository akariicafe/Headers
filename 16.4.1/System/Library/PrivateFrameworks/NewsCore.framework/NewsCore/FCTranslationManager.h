@class FCTranslationMap, FCAsyncSerialQueue;
@protocol FCTranslationProvider, FCContentContext;

@interface FCTranslationManager : NSObject <FCTranslationManager>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCTranslationMap *translationMap;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) id<FCTranslationProvider> possiblyUnfetchedTranslationProvider;

- (void)fetchTranslationProvider:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithContentContext:(id)a0;

@end
