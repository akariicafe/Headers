@class TDTextureRenditionSpec, TDTextureImageRenditionSpec, TDTextureFace;

@interface TDTextureMipLevel : NSManagedObject

@property (nonatomic) short level;
@property (retain, nonatomic) TDTextureRenditionSpec *texture;
@property (retain, nonatomic) TDTextureImageRenditionSpec *textureImage;
@property (retain, nonatomic) TDTextureFace *face;

@end
