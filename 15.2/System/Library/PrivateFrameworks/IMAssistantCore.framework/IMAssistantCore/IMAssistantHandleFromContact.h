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

- (id)description;
- (BOOL)matchesIMHandle:(id)a0;
- (void).cxx_destruct;
- (id)initWithCNLabeledPhoneNumber:(id)a0 contact:(id)a1;
- (id)initWithCNLabeledEmailAddress:(id)a0 contact:(id)a1;
- (id)initWithBusinessID:(id)a0;
- (BOOL)matchesHandleID:(id)a0;
- (id)_initWithPhoneNumber:(id)a0 emailAddress:(id)a1 businessID:(id)a2 handleType:(long long)a3 contact:(id)a4;

@end
