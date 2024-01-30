@class NSString;

@interface ISEmbossedEffect : NSObject <ISEffect>

@property struct CGSize { double width; double height; } offset;
@property double range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)filterWithBackgroundImage:(id)a0 inputImage:(id)a1;

@end
