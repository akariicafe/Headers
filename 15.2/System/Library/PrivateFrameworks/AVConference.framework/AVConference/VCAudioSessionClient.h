@class VCAudioSessionMediaProperties;
@protocol VCAudioSessionDelegate;

@interface VCAudioSessionClient : NSObject <NSCopying> {
    id<VCAudioSessionDelegate> _notificationClient;
}

@property (nonatomic) unsigned char clientType;
@property (nonatomic) id<VCAudioSessionDelegate> notificationClient;
@property (retain, nonatomic) VCAudioSessionMediaProperties *mediaProperties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
