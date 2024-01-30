@class NSString, MTRContentLauncherClusterBrandingInformationStruct, NSNumber;

@interface MTRContentLauncherClusterLaunchURLParams : NSObject <NSCopying>

@property (copy, nonatomic) NSString *contentURL;
@property (copy, nonatomic) NSString *displayString;
@property (copy, nonatomic) MTRContentLauncherClusterBrandingInformationStruct *brandingInformation;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
