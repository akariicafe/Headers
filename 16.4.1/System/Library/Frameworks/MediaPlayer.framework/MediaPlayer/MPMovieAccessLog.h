@class NSData, NSArray, AVPlayerItemAccessLog;

@interface MPMovieAccessLog : NSObject <NSCopying> {
    AVPlayerItemAccessLog *_accessLog;
}

@property (readonly, nonatomic) NSData *extendedLogData;
@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_initWithAVItemAccessLog:(id)a0;

@end
