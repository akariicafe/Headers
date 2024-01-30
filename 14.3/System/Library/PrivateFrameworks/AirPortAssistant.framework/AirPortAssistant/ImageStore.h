@interface ImageStore : NSObject

+ (id)imageNamed:(id)a0;
+ (id)imageNamed:(id)a0 inBundle:(id)a1;
+ (id)imageNamed:(id)a0 inBundle:(id)a1 ofType:(id)a2;
+ (id)imageForInformationalDiagram:(unsigned int)a0 subProductID:(unsigned int)a1 deviceKind:(int)a2 audioImage:(BOOL)a3 small:(BOOL)a4;
+ (id)imageNameForInformationalDiagram:(unsigned int)a0 subProductID:(unsigned int)a1 deviceKind:(int)a2 audioImage:(BOOL)a3 small:(BOOL)a4 useDataCache:(BOOL *)a5;
+ (id)insetImageForInformationalDiagram:(unsigned int)a0 deviceKind:(int)a1 audioImage:(BOOL)a2 small:(BOOL)a3;
+ (id)imageNameForProductID:(unsigned int)a0 subProductID:(unsigned int)a1 deviceKind:(int)a2 small:(BOOL)a3 cropped:(BOOL)a4 threeDee:(BOOL)a5;
+ (id)kitImageOfType:(long long)a0;
+ (id)sharedImageStore;
+ (id)imageForInformationalDiagram:(unsigned int)a0;
+ (double)informationDiagramBaseImageCenterOffset:(unsigned int)a0 small:(BOOL)a1;
+ (double)informationDiagramBaseImageRightEdgeInset:(unsigned int)a0 small:(BOOL)a1;
+ (id)imageForInformationalDiagramNamed:(id)a0 small:(BOOL)a1;
+ (id)insetImageForInformationalDiagram:(unsigned int)a0;
+ (id)imageForBaseStationWithProductID:(unsigned int)a0 subProductID:(unsigned int)a1 deviceKind:(int)a2 small:(BOOL)a3 cropped:(BOOL)a4 threeDee:(BOOL)a5;
+ (struct CGImage { } *)cgImageFromImage:(id)a0 forContentsScale:(double)a1;

@end
