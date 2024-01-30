@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation

@property (readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem;

- (void)run;
- (id)init;
- (void)dealloc;
- (id)initWithMediaPlayerItem:(id)a0;
- (BOOL)_runHEADRequest:(id *)a0;

@end
