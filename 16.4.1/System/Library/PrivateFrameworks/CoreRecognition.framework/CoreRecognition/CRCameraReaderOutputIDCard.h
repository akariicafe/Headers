@class UIImage, NSArray, NSString;

@interface CRCameraReaderOutputIDCard : CRCameraReaderOutput

@property (readonly) UIImage *imageValue;
@property (readonly) NSArray *vertices;
@property (readonly) NSArray *targetVertices;
@property (readonly) NSString *capturePath;

@end
