@class SGSimpleNamedEmailAddress, NSArray, NSString, SGHtmlParser, NSIndexSet, NSNumber, SGCachedResult;

@interface SGSimpleMailMessage : SGMessage {
    SGCachedResult *_htmlParserCached;
    SGCachedResult *_quotedRegionsCached;
    SGCachedResult *_hasHumanHeadersCached;
    SGCachedResult *_authorCached;
}

@property (copy, nonatomic) SGSimpleNamedEmailAddress *from;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *replyTo;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *htmlBody;
@property (copy, nonatomic) NSNumber *received;
@property (nonatomic) BOOL hasInhumanHeaders;
@property (nonatomic) BOOL isPartiallyDownloaded;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *mailingList;
@property (copy, nonatomic) NSArray *headers;
@property (readonly, nonatomic) SGHtmlParser *htmlParser;
@property (readonly, nonatomic) NSIndexSet *quotedRegions;
@property (readonly, nonatomic) BOOL hasHumanHeaders;

+ (BOOL)supportsSecureCoding;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfBodyFromRfc822:(id)a0;
+ (id)parseHeaders:(id)a0;
+ (id)simpleMailMessageFromHeaders:(id)a0;
+ (id)parseRfc822Headers:(id)a0 htmlContent:(id)a1;
+ (id)dateFromEmailString:(id)a0;
+ (id)parseParameterizedHeaderValue:(id)a0;
+ (id)htmlBodyFromRfc822:(id)a0 headers:(id)a1 attachmentCallback:(id /* block */)a2;
+ (id)uudecode:(id)a0;
+ (id)decodeQuotedPrintable:(id)a0 charset:(unsigned long long)a1 rfc2047UnderscoreAsSpace:(BOOL)a2;
+ (id)stripTrailingASCIIHSpace:(id)a0;
+ (id)formatFlowed:(id)a0 delSp:(BOOL)a1;
+ (id)parseRfc822:(id)a0 attachmentCallback:(id /* block */)a1;
+ (id)parseRfc822Headers:(id)a0 htmlContent:(id)a1 source:(id)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHeadersFromRfc822:(id)a0;
+ (id)parseRfc822:(id)a0;
+ (id)addressItemsFromEmailString:(id)a0;
+ (id)decodeEncodedWordsIn:(id)a0;
+ (BOOL)headersContainInhumanOnes:(id)a0 keys:(id)a1;
+ (id)subjectByCleaningPrefixesInSubject:(id)a0;

- (long long)contentLength;
- (id)body;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (id)initWithSearchableItem:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)textContent;
- (id)uniqueIdentifier;
- (id)headersDictionary;
- (id)description;
- (id)allRecipients;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)author;
- (void)encodeWithCoder:(id)a0;
- (id)spotlightBundleIdentifier;
- (id)initForBuilding;
- (BOOL)isInhumanContentNoncached;
- (id)dataDetectorMatchesWithSignature;
- (BOOL)isEqualToSimpleMailMessage:(id)a0;
- (id)senderDomain;
- (BOOL)hasRecipientFromSameDomainAsSender;
- (id)spotlightUniqueIdentifier;
- (id)createNewSearchableItemWithSource:(id)a0 uniqueIdentifier:(id)a1 domainIdentifier:(id)a2;
- (id)createNewSearchableItem;

@end
