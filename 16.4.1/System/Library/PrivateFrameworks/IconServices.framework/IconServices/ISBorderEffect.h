@class IFColor, NSString;

@interface ISBorderEffect : NSObject <ISEffect>

@property (retain) IFColor *color;
@property double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;
- (id)initWithLineWidth:(double)a0 color:(id)a1;

@end
