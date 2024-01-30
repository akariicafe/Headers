@class NSArray, NSString;

@interface SARDNativeFlowContextUpdate : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *clientFlowUpdateContextList;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
