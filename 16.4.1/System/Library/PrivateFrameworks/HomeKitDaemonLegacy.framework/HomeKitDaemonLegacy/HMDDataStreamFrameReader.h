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

- (BOOL)hasFailed;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)_getCurrentFrameSize;
- (void)_readFrameHeaderIfPossible;
- (unsigned long long)bytesNeededForCurrentFrame;
- (BOOL)hasCompleteFrame;
- (BOOL)hasPartialData;
- (id)popRawFrame;
- (void)pushFrameData:(id)a0;

@end
