@class _AVTAvatarRecordImageProvider;

@interface AVTAvatarRecordImageProvider : NSObject

@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *backingProvider;

- (id)init;
- (void).cxx_destruct;
- (id)imageForRecord:(id)a0 scope:(id)a1;
- (id)initWithBackingProvider:(id)a0;
- (void)imageForRecord:(id)a0 scope:(id)a1 handler:(id /* block */)a2;

@end
