@class NSString, NSArray;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;

+ (id)commandFailed;
+ (id)commandFailedWithDictionary:(id)a0 context:(id)a1;
+ (id)commandFailedWithErrorCode:(long long)a0;
+ (id)commandFailedWithReason:(id)a0;

- (id)groupIdentifier;
- (id)initWithReason:(id)a0;
- (id)encodedClassName;
- (id)initWithErrorCode:(long long)a0;
- (BOOL)requiresResponse;

@end
