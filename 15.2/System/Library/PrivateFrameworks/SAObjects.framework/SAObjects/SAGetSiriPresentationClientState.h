@class NSString, SASiriPresentationClientState, NSArray;

@interface SAGetSiriPresentationClientState : SABaseClientBoundCommand <SAGetSingleClientState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SASiriPresentationClientState *clientState;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSiriPresentationClientState;
+ (id)getSiriPresentationClientStateWithDictionary:(id)a0 context:(id)a1;

@end
