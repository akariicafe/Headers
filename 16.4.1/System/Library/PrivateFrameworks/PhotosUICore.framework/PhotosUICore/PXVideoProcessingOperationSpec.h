@class NSURL;

@interface PXVideoProcessingOperationSpec : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *inputVideoURL;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) NSURL *debugInfoOutputURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
