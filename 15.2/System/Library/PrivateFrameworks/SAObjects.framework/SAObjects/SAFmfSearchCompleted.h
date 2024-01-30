@class NSArray, NSString, NSURL, NSNumber;

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *atRequestedLocation;
@property (copy, nonatomic) NSArray *fmfLocations;
@property (copy, nonatomic) NSURL *searchContext;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchCompleted;
+ (id)searchCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
