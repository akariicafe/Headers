@class NSString;

@interface GEOImageServicePurgeCacheToSizeRequest : GEOXPCRequest <GEOXPCRequest>

@property (nonatomic) unsigned long long targetSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)replyClass;

@end
