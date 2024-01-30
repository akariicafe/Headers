@class NSData, UTType;

@interface NTKCompanionImageDataScaler : NSObject {
    double _compressionQuality;
    NSData *_outputData;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } inputSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } inputCrop;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) long long orientation;
@property (readonly, nonatomic) UTType *type;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;

- (void).cxx_destruct;
- (void)cropAndScaleWithCompletion:(id /* block */)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 data:(id)a2 orientation:(long long)a3 outputSize:(struct CGSize { double x0; double x1; })a4;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 crop:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 data:(id)a2 orientation:(long long)a3 type:(id)a4 outputSize:(struct CGSize { double x0; double x1; })a5;

@end
