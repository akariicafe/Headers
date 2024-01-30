@class NSString, CNLabeledValue, CNContact;

@interface IMAssistantHandleFromContact : NSObject

@property (readonly, nonatomic) long long handleType;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNLabeledValue *labeledEmailAddress;
@property (readonly, nonatomic) CNLabeledValue *labeledPhoneNumber;
@property (readonly, nonatomic) NSString *businessID;
@property (readonly, nonatomic) NSString *handleID;
@property (readonly, nonatomic) NSString *displayID;
@property (readonly, nonatomic) long long personHandleType;
@property (readonly, nonatomic) NSString *personHandleLabel;

+ (id)excludedNumbers;

- (id)description;
- (void).cxx_destruct;
- (BOOL)matchesIMHandle:(id)a0;
- (id)_initWithPhoneNumber:(id)a0 emailAddress:(id)a1 businessID:(id)a2 handleType:(long long)a3 contact:(id)a4;
- (id)initWithBusinessID:(id)a0;
- (id)initWithCNLabeledEmailAddress:(id)a0 contact:(id)a1;
- (id)initWithCNLabeledPhoneNumber:(id)a0 contact:(id)a1;
- (BOOL)matchesHandleID:(id)a0;

@end
