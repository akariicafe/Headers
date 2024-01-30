@class NSString;

@interface GEOConfigStorageGetValueForKeyReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) id keyValue;
@property (nonatomic) long long keySource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
