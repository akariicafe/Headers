@class MTRApplicationLauncherClusterApplicationStruct, NSNumber;

@interface MTRApplicationLauncherClusterApplicationEPStruct : NSObject <NSCopying>

@property (copy, nonatomic) MTRApplicationLauncherClusterApplicationStruct *application;
@property (copy, nonatomic) NSNumber *endpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
