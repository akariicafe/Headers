@class NSString;

@interface CALNLaunchServicesURLHandler : NSObject <CALNURLHandler>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_openApplicationOptionsForResponse:(id)a0;

- (void)openURL:(id)a0 response:(id)a1;

@end
