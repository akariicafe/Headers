@class NSData, CUICatalog;

@interface _UIImageStackImageAsset : UIImageAsset

@property (retain, nonatomic) CUICatalog *catalog;
@property (copy, nonatomic) NSData *stackData;

- (id)initWithData:(id)a0;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (id)imageWithConfiguration:(id)a0;

@end
