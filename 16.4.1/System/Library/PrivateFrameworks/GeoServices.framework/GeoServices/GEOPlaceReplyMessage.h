@class NSUUID, GEOPDPlaceResponse, NSString;

@interface GEOPlaceReplyMessage : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSUUID *requestUUID;
@property (retain, nonatomic) GEOPDPlaceResponse *response;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
