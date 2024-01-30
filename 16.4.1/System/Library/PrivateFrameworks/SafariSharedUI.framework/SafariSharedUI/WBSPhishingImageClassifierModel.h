@class NSURL, NSObject, VNCoreMLModel;
@protocol OS_dispatch_queue;

@interface WBSPhishingImageClassifierModel : NSObject <WBSPhishingImageClassifierModelProtocol> {
    VNCoreMLModel *_model;
    NSURL *_url;
    struct CGSize { double width; double height; } _imageInputSize;
    unsigned long long _cropAndScaleOption;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)configureSnapshotConfiguration:(id)a0 cropAndScaleOption:(unsigned long long)a1 webViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 modelInputSize:(struct CGSize { double x0; double x1; })a3;

- (void).cxx_destruct;
- (id)_createClassifierRequest;
- (id)_createClassifierRequestHandlerWithImage:(id)a0;
- (void)_loadModelIfNecessary;
- (BOOL)classifyImage:(id)a0 enumerationBlock:(id /* block */)a1 error:(out id *)a2;
- (void)configureSnapshotConfiguration:(id)a0 webViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithURL:(id)a0 cropAndScaleOption:(unsigned long long)a1 imageInputSize:(struct CGSize { double x0; double x1; })a2 error:(id *)a3;

@end
