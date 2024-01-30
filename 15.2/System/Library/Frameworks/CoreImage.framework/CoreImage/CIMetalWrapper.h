@class NSString, NSMutableDictionary;

@interface CIMetalWrapper : CIFilter

@property (retain) NSMutableDictionary *_dict;
@property (copy) NSString *inputFilterName;

- (id)outputImage;
- (id)inputKeys;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)init;
- (id)dummyImagesForImages:(id)a0;
- (void)dealloc;
- (id)attributes;

@end
