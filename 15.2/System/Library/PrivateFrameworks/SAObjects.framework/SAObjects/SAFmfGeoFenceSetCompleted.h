@class NSURL, NSString, SAFmfGeoFence;

@interface SAFmfGeoFenceSetCompleted : SADomainCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAFmfGeoFence *geoFence;
@property (copy, nonatomic) NSURL *searchContext;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)geoFenceSetCompleted;
+ (id)geoFenceSetCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
