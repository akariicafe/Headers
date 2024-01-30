@class NSDictionary, NSString;
@protocol ASVSettingsProvider;

@interface ASVSettings : NSObject <ASVSettingsProvider>

@property (class, readonly, nonatomic) id<ASVSettingsProvider> sharedSettings;

@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (float)floatForKey:(id)a0;
+ (float)boolForKey:(id)a0;

@end
