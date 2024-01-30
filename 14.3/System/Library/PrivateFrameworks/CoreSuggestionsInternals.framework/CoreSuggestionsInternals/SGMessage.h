@class SGCachedResult, NSString, NSArray, CSPerson, NSDate, SGHarvestQueueMetrics;

@interface SGMessage : NSObject <NSSecureCoding, NSCopying, SGSpotlightIdentifiers> {
    SGCachedResult *_isInhumanSenderCached;
    SGCachedResult *_isInhumanContentCached;
    SGCachedResult *_taggedCharacterRangesCached;
    SGCachedResult *_messageSubjectDetectedDataCached;
    SGCachedResult *_dataDetectorMatchesWithSignatureForContentCached;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *textContent;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *domainIdentifier;
@property (copy, nonatomic) NSArray *accountHandles;
@property (nonatomic) BOOL isSent;
@property (copy, nonatomic) NSString *accountType;
@property (nonatomic) BOOL isStoredEncrypted;
@property (readonly, nonatomic) CSPerson *author;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) BOOL isInhumanSender;
@property (readonly, nonatomic) BOOL isInhumanContent;
@property (readonly, nonatomic) NSArray *messageSubjectDetectedData;
@property (readonly, nonatomic) NSArray *plainTextDetectedData;
@property (readonly, nonatomic) NSArray *taggedCharacterRanges;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } detectedDataSignatureRange;
@property (retain, nonatomic) SGHarvestQueueMetrics *harvestMetrics;
@property (readonly, nonatomic) long long contentLength;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithSearchableItem:(id)a0;
+ (id)fromDictionary:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (id)initWithSearchableItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToMessage:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)spotlightBundleIdentifier;
- (id)spotlightDomainIdentifier;
- (id)initForBuilding;
- (BOOL)isInhumanContentNoncached;
- (id)dataDetectorMatchesWithSignature;
- (id)spotlightUniqueIdentifier;
- (id)spotlightReference;

@end
