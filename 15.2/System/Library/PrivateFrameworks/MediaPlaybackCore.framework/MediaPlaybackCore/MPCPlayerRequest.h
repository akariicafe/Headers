@class MPPropertySet, NSString, MPCPlayerPath;

@interface MPCPlayerRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration>

@property (copy, nonatomic) MPPropertySet *playingItemProperties;
@property (copy, nonatomic) MPPropertySet *queueSectionProperties;
@property (copy, nonatomic) MPPropertySet *queueItemProperties;
@property (nonatomic) BOOL disablePlaybackStateValidation;
@property (nonatomic) BOOL disablePlaybackRateValidation;
@property (copy, nonatomic) NSString *preferredFallbackItemRelationship;
@property (retain, nonatomic) MPCPlayerPath *playerPath;
@property (nonatomic) struct { long long reverseCount; long long forwardCount; } tracklistRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)responseClass;

- (id)middlewareClasses;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stateDumpObject;

@end
