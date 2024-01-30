@class NSString, NSObject;
@protocol NUAdManagerConfiguration;

@interface NUFetchedAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider>

@property (readonly, copy, nonatomic) NSObject<NUAdManagerConfiguration> *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
