@class NSData, CUICatalog;

@interface _UIImageStackImageAsset : UIImageAsset

@property (retain, nonatomic) CUICatalog *catalog;
@property (copy, nonatomic) NSData *stackData;

- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)imageWithConfiguration:(id)a0;

@end
