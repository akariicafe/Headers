@class NSString, GEOImageServiceResponse;

@interface GEOImageServiceReplySimple : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOImageServiceResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
