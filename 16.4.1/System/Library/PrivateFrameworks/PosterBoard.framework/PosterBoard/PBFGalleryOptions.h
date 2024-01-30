@class NSNumber, NSString, ATXFaceGalleryItem;

@interface PBFGalleryOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *modeSemanticTypeToCreate;
@property (copy, nonatomic) NSString *modeSymbolImageName;
@property (retain, nonatomic) ATXFaceGalleryItem *suggestedGalleryItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
