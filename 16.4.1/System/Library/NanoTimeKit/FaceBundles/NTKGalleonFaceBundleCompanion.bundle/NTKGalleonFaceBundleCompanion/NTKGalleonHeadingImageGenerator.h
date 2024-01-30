@class NSDictionary;

@interface NTKGalleonHeadingImageGenerator : NSObject {
    NSDictionary *_imageLookup;
}

+ (id)sharedGenerator;
+ (id)_generatePrerenderedLookup;
+ (id)_imageForHeadingString:(id)a0 font:(id)a1;

- (id)_init;
- (void).cxx_destruct;
- (id)imageForHeading:(unsigned long long)a0;

@end
