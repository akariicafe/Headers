@class NSDictionary, ARImageData;

@interface ARModifiedImageData : ARImageData {
    ARImageData *_originalImage;
}

@property (readonly, nonatomic) ARImageData *originalImage;
@property (copy, nonatomic) NSDictionary *metaData;

- (void).cxx_destruct;
- (id)initWithImageData:(id)a0;

@end
