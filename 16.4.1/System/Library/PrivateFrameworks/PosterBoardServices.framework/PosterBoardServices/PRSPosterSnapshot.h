@class NSString, IOSurface, PRSServerPosterPath;

@interface PRSPosterSnapshot : NSObject <BSXPCSecureCoding>

@property (readonly, nonatomic) PRSServerPosterPath *switcherConfigurationPath;
@property (readonly, nonatomic) PRSServerPosterPath *homeScreenConfigurationPath;
@property (readonly, nonatomic) long long variant;
@property (readonly, nonatomic) long long configurationType;
@property (readonly, nonatomic) IOSurface *surface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithIOSurface:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIOSurface:(id)a0 switcherConfigurationPath:(id)a1 homeScreenConfigurationPath:(id)a2 variant:(long long)a3 configurationType:(long long)a4;

@end
