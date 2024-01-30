@class GEODataRequestThrottlerToken, NSString;

@interface GEOThrottlerIsSafeReply : GEOXPCReply <GEOXPCReply>

@property (nonatomic) double nextSafeRequestTime;
@property (nonatomic) int availableRequestCount;
@property (retain, nonatomic) GEODataRequestThrottlerToken *throttlerToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
