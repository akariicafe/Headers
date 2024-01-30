@class NSString;

@interface ISPlayerState : NSObject

@property (readonly, nonatomic) NSString *diagnosticLabel;
@property (readonly, nonatomic) double photoBlurRadius;
@property (readonly, nonatomic) double videoAlpha;
@property (readonly, nonatomic) double videoBlurRadius;

+ (id)outputInfoWithPhotoBlurRadius:(double)a0 videoAlpha:(double)a1 videoBlurRadius:(double)a2 label:(id)a3;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPhotoBlurRadius:(double)a0 videoAlpha:(double)a1 videoBlurRadius:(double)a2 label:(id)a3;

@end
