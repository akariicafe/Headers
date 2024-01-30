@class VCMediaStream, NSMutableArray;

@interface VCSessionParticipantMediaStreamInfo : NSObject

@property (retain, nonatomic) VCMediaStream *stream;
@property (readonly, nonatomic) NSMutableArray *streamConfigs;

- (void)dealloc;
- (id)init;
- (void)addStreamConfig:(id)a0;

@end
