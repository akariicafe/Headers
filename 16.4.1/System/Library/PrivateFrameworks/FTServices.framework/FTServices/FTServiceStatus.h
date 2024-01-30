@interface FTServiceStatus : NSObject

@property (nonatomic) int supportedServicesToken;
@property unsigned long long supportedServicesFlags;
@property (nonatomic) BOOL blockPost;
@property (readonly, nonatomic) BOOL iMessageSupported;
@property (readonly, nonatomic) BOOL faceTimeAudioSupported;
@property (readonly, nonatomic) BOOL faceTimeMultiwaySupported;

+ (id)sharedInstance;

- (void)_reload;
- (void)_removeObservers;
- (unsigned long long)_noCache_supportedServicesFlags;
- (void)_addObservers;
- (id)initPrivate;
- (void)dealloc;

@end
