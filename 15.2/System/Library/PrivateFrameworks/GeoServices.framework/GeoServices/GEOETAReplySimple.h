@class NSString, GEOETAResponse;

@interface GEOETAReplySimple : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOETAResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
