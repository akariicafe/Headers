@class NSNumber, MTRContentLauncherClusterContentSearchStruct, NSString;

@interface MTRContentLauncherClusterLaunchContentParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRContentLauncherClusterContentSearchStruct *search;
@property (copy, nonatomic) NSNumber *autoPlay;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
