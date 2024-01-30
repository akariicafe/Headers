@class UIImage, PHPerson;

@interface PXPersonItem : NSObject

@property int faceImageRequestID;
@property (copy) id /* block */ faceImageLoadingCompletionBlock;
@property (copy) id /* block */ fastDisplayBlock;
@property (copy) id /* block */ resultHandler;
@property (weak) UIImage *faceImage;
@property (retain, nonatomic) PHPerson *modelObject;

- (void).cxx_destruct;
- (id)initWithPerson:(id)a0;
- (void)updateWithModel:(id)a0;

@end
