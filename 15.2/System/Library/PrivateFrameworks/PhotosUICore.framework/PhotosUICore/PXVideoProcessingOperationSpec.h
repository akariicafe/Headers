@class NSURL;

@interface PXVideoProcessingOperationSpec : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *inputVideoURL;
@property (retain, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) NSURL *debugInfoOutputURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
