@class _TtC10FinanceKit20ManagedOrderContents, NSString, _TtC10FinanceKit17ManagedOrderMonth, _TtC10FinanceKit24ManagedOrderRegistration, NSDate, _TtC10FinanceKit16ManagedOrderType, _TtC10FinanceKit22ManagedOrderWebService;

@interface FinanceKit.ManagedOrder : NSManagedObject

@property (nonatomic, copy) NSString *orderTypeIdentifier;
@property (nonatomic, copy) NSString *orderIdentifier;
@property (nonatomic, copy) NSString *authenticationToken;
@property (nonatomic) long long updateSequenceNumber;
@property (nonatomic) long long fetchSequenceNumber;
@property (nonatomic, copy) NSString *lastModifiedValue;
@property (nonatomic) long long requestAttemptCount;
@property (nonatomic, copy) NSDate *lastRequestAttemptDate;
@property (nonatomic, retain) _TtC10FinanceKit24ManagedOrderRegistration *orderRegistration;
@property (nonatomic, retain) _TtC10FinanceKit16ManagedOrderType *orderType;
@property (nonatomic, retain) _TtC10FinanceKit22ManagedOrderWebService *orderWebService;
@property (nonatomic, retain) _TtC10FinanceKit20ManagedOrderContents *orderContents;
@property (nonatomic, copy) NSDate *orderContentsModificationDate;
@property (nonatomic) BOOL automaticUpdatesEnabled;
@property (nonatomic, copy) NSDate *automaticUpdatesEnabledModificationDate;
@property (nonatomic) BOOL notificationsEnabled;
@property (nonatomic, copy) NSDate *notificationsEnabledModificationDate;
@property (nonatomic) BOOL effectiveNotificationsEnabled;
@property (nonatomic) BOOL isMarkedAsComplete;
@property (nonatomic, copy) NSDate *isMarkedAsCompleteModificationDate;
@property (nonatomic) BOOL effectiveAutomaticUpdatesEnabled;
@property (nonatomic, copy) NSString *applePayTransactionIdentifier;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *archiveDate;
@property (nonatomic, copy) NSDate *automaticArchivingDate;
@property (nonatomic, retain) _TtC10FinanceKit17ManagedOrderMonth *orderMonth;
@property (nonatomic) BOOL showsAsActive;
@property (nonatomic) BOOL isActive;
@property (nonatomic) short statusPriorityValue;
@property (nonatomic, copy) NSDate *orderContentsUpdatedDate;
@property (nonatomic, copy) NSDate *priorityEstimatedCompletionDate;

- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (void)willSave;
- (void)awakeFromInsert;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
