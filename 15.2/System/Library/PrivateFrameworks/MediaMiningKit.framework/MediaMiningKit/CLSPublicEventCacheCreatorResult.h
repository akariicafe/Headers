@class NSDictionary;

@interface CLSPublicEventCacheCreatorResult : NSObject

@property (retain, nonatomic) NSDictionary *resolvedPublicEventsByTimeLocationIdentifier;
@property (retain, nonatomic) NSDictionary *invalidationTokenByTimeLocationIdentifier;
@property (nonatomic) unsigned long long numberOfRequests;

- (void).cxx_destruct;
- (id)init;

@end
