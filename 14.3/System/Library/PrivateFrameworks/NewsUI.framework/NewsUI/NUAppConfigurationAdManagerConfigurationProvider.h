@class NSString;
@protocol FCNewsAppConfigurationManager;

@interface NUAppConfigurationAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider>

@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
