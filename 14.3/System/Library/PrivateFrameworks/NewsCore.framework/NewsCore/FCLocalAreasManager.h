@class FCLocalAreasMapping, FCAsyncSerialQueue;
@protocol FCLocalAreasProvider, FCContentContext;

@interface FCLocalAreasManager : NSObject <FCLocalAreasManager>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCLocalAreasMapping *localAreasMapping;
@property (retain, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) id<FCLocalAreasProvider> possiblyUnfetchedLocalAreasProvider;

- (void).cxx_destruct;
- (void)fetchLocalAreasProvider:(id /* block */)a0;
- (id)initWithContentContext:(id)a0;

@end
