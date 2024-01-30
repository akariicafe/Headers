@class NSData, NSArray, AVPlayerItemErrorLog;

@interface MPMovieErrorLog : NSObject <NSCopying> {
    AVPlayerItemErrorLog *_errorLog;
}

@property (readonly, nonatomic) NSData *extendedLogData;
@property (readonly, nonatomic) unsigned long long extendedLogDataStringEncoding;
@property (readonly, nonatomic) NSArray *events;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithAVItemErrorLog:(id)a0;

@end
