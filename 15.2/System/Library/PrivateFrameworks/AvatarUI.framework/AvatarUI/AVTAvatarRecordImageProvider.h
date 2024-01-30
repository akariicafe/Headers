@class _AVTAvatarRecordImageProvider;

@interface AVTAvatarRecordImageProvider : NSObject

@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *backingProvider;

- (void).cxx_destruct;
- (id)init;
- (id)imageForRecord:(id)a0 scope:(id)a1;
- (void)imageForRecord:(id)a0 scope:(id)a1 handler:(id /* block */)a2;
- (id)initWithBackingProvider:(id)a0;

@end
