@class NSURL, CIImage;

@interface OKWidgetContentImageFilter : OKWidgetBasicFilter <JSOKWidgetContentImageFilter> {
    CIImage *_imageOutput;
}

@property (retain, nonatomic) NSURL *inputImageURL;

+ (id)filterWithImageURL:(id)a0;
+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)outputImage;
- (id)inputKeys;
- (void)dealloc;
- (void)setSettingInputImageURL:(id)a0;

@end
