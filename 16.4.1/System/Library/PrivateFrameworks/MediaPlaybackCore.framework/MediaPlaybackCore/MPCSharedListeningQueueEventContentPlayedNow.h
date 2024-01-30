@class NSArray, MPModelGenericObject;

@interface MPCSharedListeningQueueEventContentPlayedNow : NSObject

@property (readonly, nonatomic) MPModelGenericObject *container;
@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, copy, nonatomic) MPModelGenericObject *startItem;

- (id)description;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 container:(id)a1 startItem:(id)a2;

@end
