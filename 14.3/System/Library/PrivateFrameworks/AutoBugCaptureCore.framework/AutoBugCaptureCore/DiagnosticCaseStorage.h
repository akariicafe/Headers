@class NSString, UploadRecord, NSDate;

@interface DiagnosticCaseStorage : NSManagedObject

@property (retain, nonatomic) NSString *caseID;
@property (retain, nonatomic) NSString *caseGroupID;
@property (retain, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSDate *caseClosedTime;
@property (retain, nonatomic) NSString *caseDomain;
@property (retain, nonatomic) NSString *caseType;
@property (retain, nonatomic) NSString *caseSubtype;
@property (retain, nonatomic) NSString *caseSubtypeContext;
@property (retain, nonatomic) NSString *caseDetectedProcess;
@property (retain, nonatomic) NSString *caseEffectiveProcess;
@property (retain, nonatomic) NSString *caseRelatedProcesses;
@property (retain, nonatomic) NSString *caseThresholdValues;
@property (nonatomic) short caseState;
@property (nonatomic) short caseClosureType;
@property (nonatomic) short caseDampeningType;
@property (retain, nonatomic) NSString *caseEvents;
@property (retain, nonatomic) NSString *casePayloads;
@property (retain, nonatomic) NSString *caseAttachments;
@property (retain, nonatomic) NSString *caseContext;
@property (retain, nonatomic) NSString *caseObjectVersion;
@property (nonatomic) BOOL remoteTrigger;
@property (nonatomic) BOOL attachmentsIncomplete;
@property (nonatomic) short uploadState;
@property (retain, nonatomic) UploadRecord *uploadRecord;
@property (retain, nonatomic) NSString *buildVariant;
@property (retain, nonatomic) NSString *buildVersion;

@end
