@class PKPass;

@interface PassWrapper : NSObject

@property (retain, nonatomic) PKPass *pass;

- (void).cxx_destruct;
- (id)croppedImageToAlignmentRectInsets:(id)a0;
- (id)getPassImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)getPassName;
- (id)initWithUniquePassID:(id)a0;

@end
