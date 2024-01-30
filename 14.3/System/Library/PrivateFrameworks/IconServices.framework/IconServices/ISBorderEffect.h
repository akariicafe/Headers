@class ISColor, NSString;

@interface ISBorderEffect : NSObject <ISEffect>

@property (retain) ISColor *color;
@property double lineWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;
- (void).cxx_destruct;
- (id)initWithLineWidth:(double)a0 color:(id)a1;

@end
