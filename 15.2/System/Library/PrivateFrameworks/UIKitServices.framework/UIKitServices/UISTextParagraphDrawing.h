@class NSString;

@interface UISTextParagraphDrawing : NSObject <UISDrawing> {
    struct __CFAttributedString { } *_textString;
    struct __CTFrame { } *_frame;
    struct CGSize { double width; double height; } _frameSize;
    double _drawingHeight;
    double _scale;
}

@property (readonly, nonatomic) unsigned char lineCount;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } drawingSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
