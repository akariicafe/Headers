@class NSString;

@interface MiroPVHostAppDelegate : NSObject <PVHostApplicationDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredDisplayColorSpace;
- (id)preferredExportColorSpace;

@end
