@class NSString, AVPlayerItemErrorLogEvent, NSDate;

@interface MPMovieErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEvent *_event;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) long long errorStatusCode;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSString *errorComment;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithAVItemErrorLogEvent:(id)a0;

@end
