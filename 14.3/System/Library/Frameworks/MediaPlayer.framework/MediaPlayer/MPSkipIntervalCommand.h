@class NSArray;

@interface MPSkipIntervalCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *preferredIntervals;

- (void).cxx_destruct;
- (id)initWithMediaRemoteCommandType:(unsigned int)a0;
- (id)newCommandEventWithInterval:(double)a0;
- (id)_mediaRemoteCommandInfoOptions;

@end
