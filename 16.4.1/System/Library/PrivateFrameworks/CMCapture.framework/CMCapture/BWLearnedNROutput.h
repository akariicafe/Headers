@class NSMutableDictionary;

@interface BWLearnedNROutput : NSObject

@property (retain, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (retain, nonatomic) NSMutableDictionary *metadata;

- (void)dealloc;

@end
