@class GEOETATrafficUpdateResponse, NSString;

@interface GEOETAReplyUpdateable : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOETATrafficUpdateResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
