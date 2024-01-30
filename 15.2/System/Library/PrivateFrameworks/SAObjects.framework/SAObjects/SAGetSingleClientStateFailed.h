@class NSString, SAAceClientState;

@interface SAGetSingleClientStateFailed : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) SAAceClientState *attemptedClientState;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSingleClientStateFailed;
+ (id)getSingleClientStateFailedWithDictionary:(id)a0 context:(id)a1;
+ (id)getSingleClientStateFailedWithErrorCode:(long long)a0;
+ (id)getSingleClientStateFailedWithReason:(id)a0;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)initWithReason:(id)a0;
- (id)initWithErrorCode:(long long)a0;

@end
