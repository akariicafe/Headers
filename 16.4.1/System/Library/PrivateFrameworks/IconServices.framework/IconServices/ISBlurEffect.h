@class NSString;

@interface ISBlurEffect : NSObject <ISEffect>

@property double radius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRadius:(double)a0;
- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;

@end
