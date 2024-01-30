@class NSUUID, NSString, NSDate;

@interface HKClinicalAccountEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *accountIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *caller;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *eventDescription;
@property (readonly, nonatomic) long long credentialStateBefore;
@property (readonly, nonatomic) long long credentialStateAfter;
@property (readonly, copy, nonatomic) NSString *typeDescription;
@property (readonly, copy, nonatomic) NSString *credentialStateBeforeDescription;
@property (readonly, copy, nonatomic) NSString *credentialStateAfterDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)eventMarkedAsFailedWithError:(id)a0;
- (id)eventWithAppendedEventDescription:(id)a0;
- (id)eventWithAppendedRefreshToken:(id)a0 description:(id)a1;
- (id)eventWithUpdatedCredentialStateAfter:(long long)a0;
- (id)eventWithUpdatedCredentialStateBefore:(long long)a0;
- (id)initWithAccountIdentifier:(id)a0 type:(long long)a1 caller:(id)a2 timestamp:(id)a3 eventDescription:(id)a4;
- (id)initWithAccountIdentifier:(id)a0 type:(long long)a1 caller:(id)a2 timestamp:(id)a3 eventDescription:(id)a4 credentialStateBefore:(long long)a5 credentialStateAfter:(long long)a6;
- (id)initWithAccountIdentifier:(id)a0 type:(long long)a1 caller:(id)a2 timestamp:(id)a3 eventDescription:(id)a4 incomingToken:(id)a5 currentToken:(id)a6;
- (BOOL)isEqualToClinicalAccountEvent:(id)a0;

@end
