@interface IMMapPreviewGenerator : IMContactCardPreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>

+ (id)UTITypes;
+ (struct CGSize { double x0; double x1; })mapThumbnailFillSizeForWidth:(double)a0;
+ (BOOL)supportsBlastDoor;
+ (struct CLLocationCoordinate2D { double x0; double x1; })_legacyCoordinateForvCardURL:(id)a0;
+ (struct CLLocationCoordinate2D { double x0; double x1; })coordinateForvCardURL:(id)a0;
+ (id)mapSnapshotterQueue;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (struct CGImage { } *)newPreviewFromSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 interfaceStyle:(long long)a2 error:(id *)a3;
+ (struct CGSize { double x0; double x1; })sizePreviewAtSourceURL:(id)a0 withPreviewConstraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (id)titleBarMaskImageForWidth:(double)a0 constraints:(struct IMPreviewConstraints { double x0; struct CGSize { double x0; double x1; } x1; double x2; BOOL x3; BOOL x4; })a1 error:(id *)a2;
+ (id)vCardDataForURL:(id)a0;
+ (id)vCardURLSForData:(id)a0;
+ (id)valueForKey:(id)a0 forURLComponents:(id)a1;
+ (BOOL)writesToDisk;

@end
