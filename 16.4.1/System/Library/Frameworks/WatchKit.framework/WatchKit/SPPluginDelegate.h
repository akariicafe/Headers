@class NSString;

@interface SPPluginDelegate : NSObject <PKServiceDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)rootObjectForPlugIn:(id)a0;

@end
