@class NSString, NSMutableArray, NSDate;

@interface PayloadMetadata : NSObject

@property (copy, nonatomic) NSString *token;
@property (nonatomic) long long radarID;
@property (nonatomic) long long urgency;
@property (nonatomic) unsigned long long apnsIdentifier;
@property (readonly, nonatomic) BOOL requiresUserConsent;
@property (readonly, nonatomic) unsigned long long userConsentState;
@property (readonly, nonatomic) NSString *caseID;
@property (readonly, nonatomic) double caseTimestamp;
@property (readonly, nonatomic) NSMutableArray *attachmentFileInfos;
@property (retain, nonatomic) NSDate *receivedTime;
@property (nonatomic) short payloadPreflightStatus;

+ (void)initialize;
+ (BOOL)uploadRequiresConsent:(id)a0;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithCaseIdentifier:(id)a0;
- (BOOL)validateAttachmentFiles;
- (void)requestUserConsent:(id)a0 reply:(id /* block */)a1;

@end
