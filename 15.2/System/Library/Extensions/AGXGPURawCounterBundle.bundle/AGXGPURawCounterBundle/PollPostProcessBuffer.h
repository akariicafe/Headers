@class NSMutableData;

@interface PollPostProcessBuffer : NSObject

@property unsigned int srcBufferPrevOffset;
@property unsigned int srcBufferPrevSize;
@property (readonly) NSMutableData *dstBuffer;

- (id)init;
- (void)dealloc;
- (void)reset;

@end
