@class NSString;

@interface SBSystemShellExtendedDisplayResolverFactory : NSObject <SBWindowingModeResolverFactory>

@property (readonly, nonatomic) long long displayWindowingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolverForPhysicalDisplay:(id)a0;

@end
