@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *preferredIntervals;

- (id)newCommandEventWithInterval:(double)a0;
- (id)_mediaRemoteCommandInfoOptions;
- (void).cxx_destruct;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;

@end
