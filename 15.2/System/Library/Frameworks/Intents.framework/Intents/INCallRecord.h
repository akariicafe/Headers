@class NSString, NSArray, NSDate, INPerson, NSNumber;

@interface INCallRecord : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) INPerson *caller;
@property (readonly, copy, nonatomic) INPerson *caller;
@property (readonly, nonatomic) long long preferredCallProvider;
@property (readonly, copy, nonatomic) NSString *providerId;
@property (readonly, copy, nonatomic) NSString *providerBundleId;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) long long callRecordType;
@property (readonly, copy, nonatomic) NSNumber *callDuration;
@property (readonly, copy, nonatomic) NSNumber *unseen;
@property (readonly, nonatomic) long long callCapability;
@property (readonly, copy, nonatomic) NSNumber *numberOfCalls;
@property (readonly, copy, nonatomic) NSNumber *isCallerIdBlocked;
@property (readonly, copy, nonatomic) NSArray *participants;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 caller:(id)a2 callRecordType:(long long)a3 callCapability:(long long)a4 callDuration:(id)a5 unseen:(id)a6 preferredCallProvider:(long long)a7 numberOfCalls:(id)a8 providerId:(id)a9 providerBundleId:(id)a10 isCallerIdBlocked:(id)a11;
- (id)_dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 caller:(id)a2 callRecordType:(long long)a3 callCapability:(long long)a4 callDuration:(id)a5 unseen:(id)a6 preferredCallProvider:(long long)a7 numberOfCalls:(id)a8 providerId:(id)a9;
- (id)_intents_cacheableObjects;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 caller:(id)a2 callRecordType:(long long)a3 callCapability:(long long)a4 callDuration:(id)a5 unseen:(id)a6 numberOfCalls:(id)a7 isCallerIdBlocked:(id)a8;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 callRecordType:(long long)a2 callCapability:(long long)a3 callDuration:(id)a4 unseen:(id)a5 preferredCallProvider:(long long)a6 participants:(id)a7 numberOfCalls:(id)a8 providerId:(id)a9 providerBundleId:(id)a10 isCallerIdBlocked:(id)a11;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 callRecordType:(long long)a2 callCapability:(long long)a3 callDuration:(id)a4 unseen:(id)a5 participants:(id)a6 numberOfCalls:(id)a7 isCallerIdBlocked:(id)a8;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (void)_intents_updateContainerWithCache:(id)a0;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 callRecordType:(long long)a2 callCapability:(long long)a3 callDuration:(id)a4 unseen:(id)a5;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 callRecordType:(long long)a2 callCapability:(long long)a3 callDuration:(id)a4 unseen:(id)a5 numberOfCalls:(id)a6;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 caller:(id)a2 callRecordType:(long long)a3 callCapability:(long long)a4 callDuration:(id)a5 unseen:(id)a6;
- (id)initWithIdentifier:(id)a0 dateCreated:(id)a1 caller:(id)a2 callRecordType:(long long)a3 callCapability:(long long)a4 callDuration:(id)a5 unseen:(id)a6 numberOfCalls:(id)a7;

@end
