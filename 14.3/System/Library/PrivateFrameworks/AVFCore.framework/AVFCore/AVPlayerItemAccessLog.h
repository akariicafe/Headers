@class NSArray, AVPlayerItemAccessLogInternal;

@interface AVPlayerItemAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLogInternal *_playerItemAccessLog;
}

@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithLogArray:(id)a0;
- (id)description;
- (id)_common_init;
- (id)_accessLogArray;
- (id)extendedLogData;

@end
