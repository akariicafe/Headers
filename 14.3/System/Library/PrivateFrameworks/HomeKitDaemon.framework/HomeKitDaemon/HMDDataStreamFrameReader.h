@class NSObject;
@protocol OS_dispatch_data;

@interface HMDDataStreamFrameReader : NSObject {
    NSObject<OS_dispatch_data> *_partialFrame;
    BOOL _headerInfoRead;
    BOOL _streamFailed;
    unsigned char _currentframeType;
    unsigned long long _payloadLength;
}

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (BOOL)hasFailed;
- (unsigned long long)bytesNeededForCurrentFrame;
- (unsigned long long)_getCurrentFrameSize;
- (void)_readFrameHeaderIfPossible;
- (BOOL)hasCompleteFrame;
- (void)pushFrameData:(id)a0;
- (BOOL)hasPartialData;
- (id)popRawFrame;

@end
