@class NSArray, NSString;

@interface BRCDaemonSyncedRootURLCache : NSObject <BRSyncedRootURLCache>

@property (readonly, nonatomic) NSArray *syncedRootURLs;
@property (readonly, nonatomic) BOOL cacheMightBePopulated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPersona:(id)a0;

@end
