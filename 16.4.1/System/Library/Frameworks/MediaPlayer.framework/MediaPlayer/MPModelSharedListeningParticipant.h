@interface MPModelSharedListeningParticipant : MPModelPerson

@property (copy, nonatomic) id /* block */ artworkCatalogBlock;

+ (id)kind;
+ (id)__artworkCatalogBlock_KEY;

- (id)artworkCatalog;

@end
