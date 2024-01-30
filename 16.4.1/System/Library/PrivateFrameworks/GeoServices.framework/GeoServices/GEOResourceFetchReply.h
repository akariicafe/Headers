@class NSArray, NSString;

@interface GEOResourceFetchReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) NSArray *names;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
