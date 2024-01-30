@class NSArray;
@protocol NSCopying;

@interface MPTiledArtworkRepresentationToken : NSObject

@property (copy, nonatomic) id<NSCopying> revisionIdentifier;
@property (copy, nonatomic) NSArray *tileArtworkVisualIdenticalityIdentifiers;

- (void).cxx_destruct;

@end
