@class NSString, AVPlayerItemAccessLogEvent, NSDate;

@interface MPMovieAccessLogEvent : NSObject <NSCopying> {
    AVPlayerItemAccessLogEvent *_event;
}

@property (readonly, nonatomic) unsigned long long numberOfSegmentsDownloaded;
@property (readonly, nonatomic) NSDate *playbackStartDate;
@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) unsigned long long numberOfServerAddressChanges;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) double playbackStartOffset;
@property (readonly, nonatomic) double segmentsDownloadedDuration;
@property (readonly, nonatomic) double durationWatched;
@property (readonly, nonatomic) long long numberOfStalls;
@property (readonly, nonatomic) long long numberOfBytesTransferred;
@property (readonly, nonatomic) double observedBitrate;
@property (readonly, nonatomic) double indicatedBitrate;
@property (readonly, nonatomic) long long numberOfDroppedVideoFrames;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAVItemAccessLogEvent:(id)a0;

@end
