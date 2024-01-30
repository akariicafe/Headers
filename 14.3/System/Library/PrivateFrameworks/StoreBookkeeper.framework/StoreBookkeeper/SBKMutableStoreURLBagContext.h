@class NSString, NSURL;

@interface SBKMutableStoreURLBagContext : SBKStoreURLBagContext

@property (copy) NSString *domain;
@property (retain) NSURL *syncRequestURL;
@property (retain) NSURL *pushKeyValueRequestURL;
@property (retain) NSURL *pullKeyValueRequestURL;
@property (retain) NSURL *pushAllKeyValueRequestURL;
@property (retain) NSURL *pullAllKeyValueRequestURL;
@property BOOL domainDisabled;
@property double pollingIntervalInSeconds;

@end
