@interface TSCH3DFillTextureCoordinates : NSObject

+ (id)coordinates;

- (id)init;
- (void)addTexcoordsToProcessor:(id)a0 renderingLightingModel:(id)a1 texcoords:(id)a2;
- (id)packageForRenderingLightingModel:(id)a0;

@end
