@class MPArtworkRepresentation;

@interface MPArtworkRepresentationCollection : NSObject

@property (retain, nonatomic) MPArtworkRepresentation *imageRepresentation;
@property (retain, nonatomic) MPArtworkRepresentation *videoRepresentation;
@property (nonatomic) unsigned long long bestRepresentationKinds;

+ (id)collectionWithImageRepresentation:(id)a0 videoRepresentation:(id)a1 bestRepresentationKinds:(unsigned long long)a2;
+ (id)collectionWithImageRepresentation:(id)a0 videoRepresentation:(id)a1;

- (void).cxx_destruct;
- (BOOL)isBestRepresentationForKind:(long long)a0;
- (void)resetForRepresentationKinds:(unsigned long long)a0;

@end
