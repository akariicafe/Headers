@class NSDictionary, NSString;
@protocol NUAuxiliaryImage;

@interface NUCGAuxiliaryImageProperties : NSObject <NUAuxiliaryImageProperties> {
    id _imageSource;
}

@property (retain) NSDictionary *auxCoreGraphicsInfoDictionary;
@property (retain) id<NUAuxiliaryImage> auxImage;
@property (readonly) NSString *auxiliaryImageTypeCGIdentifier;
@property struct { long long width; long long height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)auxiliaryCoreGraphicsInfoDictionary:(out id *)a0;
- (id)auxiliaryImage:(out id *)a0;
- (id)initWithCGProperties:(id)a0 imageSource:(struct CGImageSource { } *)a1;

@end
