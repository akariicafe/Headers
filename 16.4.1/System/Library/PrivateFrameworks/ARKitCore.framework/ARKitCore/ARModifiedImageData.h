@class NSDictionary, ARImageData;

@interface ARModifiedImageData : ARImageData {
    ARImageData *_originalImage;
}

@property (readonly, nonatomic) ARImageData *originalImage;
@property (copy, nonatomic) NSDictionary *metaData;

- (id)initWithImageData:(id)a0;
- (void).cxx_destruct;

@end
