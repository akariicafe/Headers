@class LiveService, NSString;

@interface PlayLiveServiceIntent : INIntent

@property (copy, nonatomic) LiveService *liveService;
@property (copy, nonatomic) NSString *serviceNameSearch;

@end
