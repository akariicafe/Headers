@class NSString, GEOMapDataSubscription;

@interface GEOMapSubscriptionAddReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOMapDataSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
