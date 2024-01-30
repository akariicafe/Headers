@class NSString;

@interface SASyncServerSyncDataRequest : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *clientGeneration;
@property (copy, nonatomic) NSString *syncType;
@property (copy, nonatomic) NSString *syncToken;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
