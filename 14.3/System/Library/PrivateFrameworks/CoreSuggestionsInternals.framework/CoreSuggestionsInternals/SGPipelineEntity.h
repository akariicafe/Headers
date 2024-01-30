@class NSString, NSArray, SGLazyResult, INInteraction, NSMutableDictionary, SGSimpleMailMessage, SGMessage, NSMutableArray, SGHarvestQueueMetrics, SGTextMessage, NSSet;

@interface SGPipelineEntity : SGEntity {
    BOOL _fullDownloadRequested;
    struct { struct { unsigned short bom; unsigned short tag; } _featureType; BOOL hasInhumanHeaders; BOOL inhumanEmailAddress; BOOL inhumanAuthorName; BOOL inhumanBody; BOOL isTemplate; } _inhumanFeatures;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _dissectorLock;
    BOOL _useMailMessageHtmlParser;
    BOOL _messageInhumannessChecked;
    struct _NSRange { unsigned long long location; unsigned long long length; } _dataDetectorsSignatureForTesting;
    BOOL _overrideDataDetectorSignatureForTesting;
    SGLazyResult *_lazySnippetsContent;
}

@property (readonly, nonatomic) SGMessage *message;
@property (readonly, nonatomic) SGSimpleMailMessage *mailMessage;
@property (readonly, nonatomic) SGTextMessage *textMessage;
@property (readonly, nonatomic) INInteraction *interaction;
@property (retain, nonatomic) SGHarvestQueueMetrics *harvestMetrics;
@property (retain, nonatomic) NSMutableArray *enrichments;
@property (retain, nonatomic) NSMutableArray *externalEnrichments;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } plainTextSigRange;
@property (readonly, nonatomic) struct { struct { unsigned short x0; unsigned short x1; } x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; } *inhumanFeatures;
@property (readonly, nonatomic) NSString *snippetsContent;
@property (nonatomic) BOOL contactInformationExtracted;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *instantMessageAddresses;
@property (retain, nonatomic) NSMutableArray *taggedCharacterRanges;
@property (readonly, getter=hasFullDownloadBeenRequested) BOOL fullDownloadRequested;
@property (readonly, nonatomic) NSMutableDictionary *emailToCanonicalEmailCache;
@property (readonly, nonatomic) NSString *accountType;
@property (retain) NSArray *invalidatedMessageIdentifiers;
@property (retain, nonatomic) NSArray *authorMatchingContacts;
@property (retain, nonatomic) NSSet *authorMatchingContactsKeys;
@property (nonatomic) BOOL needsSourceVerification;
@property (nonatomic) BOOL pendingVerification;

+ (id)fromCloudKitRecord:(id)a0;

- (void)addExternalEnrichment:(id)a0;
- (void)addBirthdayEnrichment:(id)a0;
- (void).cxx_destruct;
- (void)setLastModifiedTimestamp:(struct SGUnixTimestamp_ { double x0; })a0;
- (id)initWithDuplicateKey:(id)a0 title:(id)a1;
- (void)addEnrichments:(id)a0;
- (void)addOrReplacePreferredEnrichment:(id)a0;
- (id)initWithInteraction:(id)a0 fromBundleIdentifier:(id)a1;
- (id)initWithIntentPersonAtDate:(id)a0 bundleId:(id)a1 handle:(id)a2 displayName:(id)a3;
- (void)enumeratePeople:(id /* block */)a0;
- (BOOL)isInhuman;
- (void)addDetectedPostalAddress:(id)a0 forIdentity:(id)a1 context:(id)a2 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 extractionInfo:(id)a4;
- (unsigned long long)eventEnrichmentsCount;
- (id)initWithInteractionIdentifier:(id)a0 fromBundleIdentifier:(id)a1;
- (void)runWithDissectorLock:(id /* block */)a0;
- (void)requestFullDownload;
- (void)addDetectedEmailAddress:(id)a0 forIdentity:(id)a1 context:(id)a2 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 extractionInfo:(id)a4;
- (void)_lazyCheckMessageForHumanness;
- (void)addDetectedInstantMessageAddress:(id)a0 forIdentity:(id)a1 context:(id)a2 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 extractionInfo:(id)a4;
- (id)initWithMessage:(id)a0;
- (id)_initWithInteractionIdentifier:(id)a0 fromBundleIdentifier:(id)a1 creationTime:(id)a2;
- (void)addEnrichment:(id)a0;
- (void)addEmailAddressEnrichment:(id)a0;
- (void)acquireDissectorLock;
- (id)initWithEmailMessage:(id)a0;
- (void)setCreationTimestamp:(struct SGUnixTimestamp_ { double x0; })a0;
- (BOOL)hasEventEnrichment;
- (void)addDetectedBirthday:(id)a0 forIdentity:(id)a1 context:(id)a2 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 extractionInfo:(id)a4;
- (void)releaseDissectorLock;
- (void)addDetectedPhoneNumber:(id)a0 forIdentity:(id)a1 context:(id)a2 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 extractionInfo:(id)a4;
- (void)stripEventInformation;
- (void)addDetection:(id)a0 forIdentity:(id)a1 extractionInfo:(id)a2;
- (void)addInstantMessageAddressEnrichment:(id)a0;
- (void)addSocialProfileEnrichment:(id)a0;
- (void)addTaggedCharacterRanges:(id)a0;
- (id)contactDetailsWithType:(unsigned long long)a0;
- (void)addDetectedSocialProfile:(id)a0 forIdentity:(id)a1 context:(id)a2 contextRangeOfInterest:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 extractionInfo:(id)a4;
- (id)initWithInteraction:(id)a0 identifier:(id)a1 fromBundleIdentifier:(id)a2;
- (id)initWithTextMessage:(id)a0;

@end
