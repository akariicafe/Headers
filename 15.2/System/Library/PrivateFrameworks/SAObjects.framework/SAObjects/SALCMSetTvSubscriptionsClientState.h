@class NSString, SALCMTvSubscriptionsClientState;

@interface SALCMSetTvSubscriptionsClientState : SABaseCommand <SAServerBoundCommand, SASetSingleClientState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SALCMTvSubscriptionsClientState *clientState;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setTvSubscriptionsClientState;
+ (id)setTvSubscriptionsClientStateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
