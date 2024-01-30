@class MRPlayer, NSString, MRPlayerPath, MRClient, MROrigin, MRAVEndpoint;

@interface MRDestination : NSObject <NSCopying>

@property (retain, nonatomic) NSString *outputDeviceUID;
@property (retain, nonatomic) MRAVEndpoint *endpoint;
@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (retain, nonatomic) MROrigin *origin;
@property (readonly, nonatomic) NSString *outputContextUID;
@property (readonly, nonatomic) BOOL isLocal;
@property (readonly, nonatomic) BOOL isProactive;
@property (readonly, nonatomic) BOOL isUserSelected;
@property (copy, nonatomic) MRClient *client;
@property (copy, nonatomic) MRPlayer *player;

+ (id)userSelectedDestination;
+ (id)localDestination;
+ (id)proactiveDestination;

- (id)initWithOutputContextUID:(id)a0;
- (id)initWithOutputDeviceUID:(id)a0;
- (id)initWithPlayerPath:(id)a0;
- (id)_init;
- (id)initWithOrigin:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEndpoint:(id)a0;
- (void)populatePlayerPathIfNeeded;
- (id)description;
- (void).cxx_destruct;

@end
