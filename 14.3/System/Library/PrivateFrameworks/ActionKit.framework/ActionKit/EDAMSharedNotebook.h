@class NSNumber, NSString, EDAMSharedNotebookRecipientSettings;

@interface EDAMSharedNotebook : FATObject

@property (retain, nonatomic) NSNumber *id;
@property (retain, nonatomic) NSNumber *userId;
@property (retain, nonatomic) NSString *notebookGuid;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *recipientIdentityId;
@property (retain, nonatomic) NSNumber *notebookModifiable;
@property (retain, nonatomic) NSNumber *serviceCreated;
@property (retain, nonatomic) NSNumber *serviceUpdated;
@property (retain, nonatomic) NSString *globalId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSNumber *privilege;
@property (retain, nonatomic) EDAMSharedNotebookRecipientSettings *recipientSettings;
@property (retain, nonatomic) NSNumber *sharerUserId;
@property (retain, nonatomic) NSString *recipientUsername;
@property (retain, nonatomic) NSNumber *recipientUserId;
@property (retain, nonatomic) NSNumber *serviceAssigned;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
