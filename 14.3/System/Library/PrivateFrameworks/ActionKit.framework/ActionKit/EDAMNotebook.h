@class NSString, NSArray, EDAMUser, EDAMNotebookRestrictions, EDAMNotebookRecipientSettings, EDAMPublishing, EDAMBusinessNotebook, NSNumber;

@interface EDAMNotebook : FATObject

@property (retain, nonatomic) NSString *guid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSNumber *updateSequenceNum;
@property (retain, nonatomic) NSNumber *defaultNotebook;
@property (retain, nonatomic) NSNumber *serviceCreated;
@property (retain, nonatomic) NSNumber *serviceUpdated;
@property (retain, nonatomic) EDAMPublishing *publishing;
@property (retain, nonatomic) NSNumber *published;
@property (retain, nonatomic) NSString *stack;
@property (retain, nonatomic) NSArray *sharedNotebookIds;
@property (retain, nonatomic) NSArray *sharedNotebooks;
@property (retain, nonatomic) EDAMBusinessNotebook *businessNotebook;
@property (retain, nonatomic) EDAMUser *contact;
@property (retain, nonatomic) EDAMNotebookRestrictions *restrictions;
@property (retain, nonatomic) EDAMNotebookRecipientSettings *recipientSettings;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
