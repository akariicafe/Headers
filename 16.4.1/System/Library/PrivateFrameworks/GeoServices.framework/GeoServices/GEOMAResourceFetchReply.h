@class NSURL, NSData, NSString;

@interface GEOMAResourceFetchReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *sandBoxToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
