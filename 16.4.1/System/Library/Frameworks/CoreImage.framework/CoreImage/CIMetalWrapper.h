@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (void)setValue:(id)a0 forKey:(id)a1;
- (id)outputImage;
- (id)attributes;
- (void)dealloc;
- (id)init;
- (id)inputKeys;
- (id)dummyImagesForImages:(id)a0;

@end
