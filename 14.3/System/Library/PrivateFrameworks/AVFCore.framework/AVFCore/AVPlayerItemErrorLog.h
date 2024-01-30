@class NSArray, AVPlayerItemErrorLogInternal;

@interface AVPlayerItemErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLogInternal *_playerItemErrorLog;
}

@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithLogArray:(id)a0;
- (id)description;
- (id)_common_init;
- (id)_errorLogArray;
- (id)extendedLogData;

@end
