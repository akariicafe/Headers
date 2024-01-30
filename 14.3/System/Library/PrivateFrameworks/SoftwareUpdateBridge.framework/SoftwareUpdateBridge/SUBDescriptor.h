@class NSString, NSData, NSError, NSDate, SUBDocumentation;

@interface SUBDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SUBDocumentation *documentation;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *productBuildVersion;
@property (retain, nonatomic) NSString *documentationID;
@property (retain, nonatomic) NSString *publisher;
@property (retain, nonatomic) NSString *productSystemName;
@property (retain, nonatomic) NSString *marketingVersion;
@property (nonatomic) long long downloadSize;
@property (nonatomic) long long unarchivedSize;
@property (nonatomic) long long msuPrepareSize;
@property (nonatomic) long long installationSize;
@property (nonatomic) long long totalRequiredFreeSpace;
@property (nonatomic) BOOL userDidAcceptTermsAndConditions;
@property (nonatomic) long long userInstallRequestType;
@property (nonatomic) BOOL willProceedWithInstallation;
@property (nonatomic) BOOL isAwaitingAdmissionControlForInstallation;
@property (retain, nonatomic) NSError *denialReasons;
@property (retain, nonatomic) NSDate *dateOfLastSentInstallNotification;
@property (retain, nonatomic) NSDate *dateOfLastScheduleOfAutoUpdateNotification;
@property (retain, nonatomic) NSDate *dateOfLastScheduleOfAutoUpdate;
@property (retain, nonatomic) NSData *manifest;
@property (retain, nonatomic) NSDate *autoSUStartTime;
@property (retain, nonatomic) NSDate *autoSUEndTime;
@property (nonatomic) BOOL installTonightScheduled;
@property (nonatomic) BOOL displayTermsRequested;
@property (retain, nonatomic) NSString *osName;
@property (readonly, nonatomic) long long preparationSize;
@property (readonly, retain, nonatomic) NSString *humanReadableUpdateName;

- (void).cxx_destruct;
- (id)copy;
- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)stringsMatch:(id)a0 second:(id)a1;

@end
