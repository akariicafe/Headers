@class NSString, PAApplication, CNAuditToken, PAAccessLogger, NSObject;
@protocol OS_os_log, OS_tcc_identity;

@interface CNRegulatoryLogger : NSObject <CNRegulatoryLogger>

@property (readonly, nonatomic) struct ct_green_tea_logger_s { } *greenTeaLogger;
@property (readonly, nonatomic) BOOL isGreenTeaDiagnosticsEnabled;
@property (nonatomic) unsigned long long greenTeaDiagnosticLogFaultForEventCount;
@property (nonatomic) unsigned long long greenTeaDiagnosticEventCounter;
@property (retain, nonatomic) PAAccessLogger *accessLogger;
@property (retain, nonatomic) PAApplication *accessor;
@property (readonly, nonatomic) NSString *accessService;
@property (readonly, nonatomic) CNAuditToken *cnAuditToken;
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *assumedIdentity;
@property (readonly, nonatomic) BOOL isAccessEventsDiagnosticsEnabled;
@property (retain, nonatomic) NSString *processDescription;
@property (readonly, nonatomic) NSObject<OS_os_log> *os_log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstanceForAddressBook;

- (void)logContactPickerAccessEvent;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1 logCategory:(const char *)a2;
- (void)logGreenTeaEvent:(id)a0;
- (id)accessorImpl;
- (id)accessorForAuditTokenValidatingAssumedIdentity;
- (void)willNotLogContactsDataAccessEventAsLoggingDisabled;
- (void)willLogContactsDataAccessEvent;
- (void)willNotLogContactPickerAccessEventAsLoggingDisabled;
- (void)willNotLogContactPickerAccessEventAsLoggingInProcess;
- (void)willLogContactPickerAccessEvent;
- (id)processDescriptionImpl;
- (void)deletingContactsData;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (void).cxx_destruct;
- (void)readingContactsData;
- (void)modifyingContactsData;
- (void)logContactsDataAccessEvent;
- (void)receivingContactsDataFromOOPContactPicker;
- (void)displayingOOPContactPicker;
- (void)dealloc;
- (void)readAndTransmittingContactsData;

@end
