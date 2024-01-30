@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (id)init;
- (id)inputKeys;
- (id)dummyImagesForImages:(id)a0;
- (void)dealloc;
- (id)attributes;
- (id)outputImage;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
