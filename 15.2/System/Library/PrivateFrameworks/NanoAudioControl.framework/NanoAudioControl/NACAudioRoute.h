@class NSString;

@interface NACAudioRoute : NSObject

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *routeName;
@property (readonly, nonatomic) long long routeType;
@property (readonly, nonatomic) BOOL supportsVolumeControl;
@property (readonly, nonatomic, getter=isPicked) BOOL picked;

+ (id)audioRouteWithMPAVRoute:(id)a0;
+ (id)buffersFromAudioRoutes:(id)a0;
+ (id)audioRoutesFromBuffers:(id)a0;
+ (long long)_routeTypeFromMPAVRoute:(id)a0;
+ (long long)_routeTypeFromRouteBufferType:(int)a0;
+ (id)audioRouteFromBuffer:(id)a0;
+ (int)_routeBufferTypeFromRouteType:(long long)a0;

- (id)buffer;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToAudioRoute:(id)a0;
- (void)setSupportsVolumeControl:(BOOL)a0;
- (id)initWithMPAVRoute:(id)a0;

@end
