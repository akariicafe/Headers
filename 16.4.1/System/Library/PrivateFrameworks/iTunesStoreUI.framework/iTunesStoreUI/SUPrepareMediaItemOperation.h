@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation

@property (readonly, copy, nonatomic) SUMediaPlayerItem *mediaPlayerItem;

- (void)run;
- (void)dealloc;
- (id)init;
- (BOOL)_runHEADRequest:(id *)a0;
- (id)initWithMediaPlayerItem:(id)a0;

@end
