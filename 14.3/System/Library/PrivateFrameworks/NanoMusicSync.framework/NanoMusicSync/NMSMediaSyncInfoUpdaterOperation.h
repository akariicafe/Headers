@class NSDictionary;

@interface NMSMediaSyncInfoUpdaterOperation : MPAsyncOperation

@property (readonly, nonatomic) NSDictionary *syncInfo;

+ (id)sharedLibraryRequestQueue;

- (void).cxx_destruct;
- (void)execute;

@end
