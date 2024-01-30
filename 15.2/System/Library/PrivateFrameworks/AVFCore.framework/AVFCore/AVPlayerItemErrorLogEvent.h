@class NSString, AVPlayerItemErrorLogEventInternal, NSDate;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying> {
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *URI;
@property (readonly, nonatomic) NSString *serverAddress;
@property (readonly, nonatomic) NSString *playbackSessionID;
@property (readonly, nonatomic) long long errorStatusCode;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) NSString *errorComment;

- (id)_common_init;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
