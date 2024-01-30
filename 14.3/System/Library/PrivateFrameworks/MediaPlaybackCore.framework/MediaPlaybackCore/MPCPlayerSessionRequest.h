@class MPPropertySet, NSString, MPCPlayerPath;

@interface MPCPlayerSessionRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration>

@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (copy, nonatomic) MPPropertySet *sessionProperties;
@property (readonly) struct { long long x0; long long x1; } tracklistRange;
@property (readonly, nonatomic) MPPropertySet *playingItemProperties;
@property (readonly, nonatomic) MPPropertySet *queueItemProperties;
@property (readonly, nonatomic) MPPropertySet *queueSectionProperties;
@property (readonly, nonatomic) NSString *preferredFallbackItemRelationship;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)responseClass;

@end
