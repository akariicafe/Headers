@class NSString, MPAVRoute;

@interface MPCPlayerPath : NSObject <NSCopying, NSSecureCoding> {
    int _pid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void *mediaRemotePlayerPath;
@property (readonly, nonatomic) NSString *deviceUID;
@property (readonly, copy, nonatomic) NSString *representedBundleDisplayName;
@property (readonly, copy, nonatomic) NSString *representedBundleID;
@property (readonly, nonatomic) MPAVRoute *route;
@property (readonly, nonatomic, getter=isSystemMusicPath) BOOL systemMusicPath;
@property (readonly, nonatomic, getter=isResolved) BOOL resolved;
@property (readonly, nonatomic, getter=isFullyResolved) BOOL fullyResolved;
@property (readonly, nonatomic) void *origin;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *playerID;
@property (readonly, nonatomic, getter=isInProcess) BOOL inProcess;

+ (id)pathWithCustomOrigin:(void *)a0 bundleID:(id)a1 playerID:(id)a2;
+ (id)systemMusicPathWithRoute:(id)a0 playerID:(id)a1;
+ (id)pathWithDeviceUID:(id)a0 bundleID:(id)a1 pid:(int)a2 playerID:(id)a3;
+ (id)deviceActivePlayerPath;
+ (id)pathWithRoute:(id)a0 bundleID:(id)a1 playerID:(id)a2;
+ (id)pathWithRoute:(id)a0 mediaRemotePlayerPath:(void *)a1 isResolved:(BOOL)a2;
+ (id)pathWithDeviceUIDs:(id)a0 bundleID:(id)a1 pid:(int)a2 playerID:(id)a3;

- (id)initWithDeviceUID:(id)a0 bundleID:(id)a1 pid:(int)a2 playerID:(id)a3;
- (id)pathByAppendingPlayerIDSuffix:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRoute:(id)a0 bundleID:(id)a1 pid:(int)a2 playerID:(id)a3;
- (id)initWithRoute:(id)a0 bundleID:(id)a1 playerID:(id)a2;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)resolveWithCompletion:(id /* block */)a0;
- (void)resolveWithRouteResolvedHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;

@end
