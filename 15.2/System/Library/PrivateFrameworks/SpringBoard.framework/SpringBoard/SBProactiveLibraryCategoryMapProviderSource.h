@class NSString, ATXAppDirectoryClient, NSArray;
@protocol SBHLibraryCategoryMapProviderSourceDelegate;

@interface SBProactiveLibraryCategoryMapProviderSource : NSObject <SBHLibraryCategoryMapProviderSource> {
    ATXAppDirectoryClient *_appDirectoryClient;
    NSArray *_lastKnownGoodSuggestions;
    NSArray *_lastKnownGoodRecentApps;
}

@property (weak, nonatomic) id<SBHLibraryCategoryMapProviderSourceDelegate> delegate;
@property (readonly, nonatomic) NSString *sourceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
