@class SGSimpleNamedEmailAddress, NSString, NSArray, NSData, HVHtmlParser, NSIndexSet, _PASCachedResult;

@interface SGSimpleMailMessage : SGMessage {
    NSString *_htmlBody;
    _PASCachedResult *_htmlBodyCached;
    NSData *_htmlContentData;
    _PASCachedResult *_htmlContentDataCached;
    _PASCachedResult *_quotedRegionsCached;
    _PASCachedResult *_hasHumanHeadersCached;
    _PASCachedResult *_authorCached;
}

@property (readonly, nonatomic) NSString *messageIdWithoutBrackets;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *from;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *replyTo;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *htmlBody;
@property (copy, nonatomic) NSData *htmlContentData;
@property (nonatomic) BOOL hasInhumanHeaders;
@property (nonatomic) BOOL isPartiallyDownloaded;
@property (copy, nonatomic) SGSimpleNamedEmailAddress *mailingList;
@property (copy, nonatomic) NSArray *mailboxIdentifiers;
@property (copy, nonatomic) NSArray *headers;
@property (readonly, nonatomic) NSString *appleMailMessageId;
@property (readonly, nonatomic) NSString *inReplyTo;
@property (readonly, nonatomic) HVHtmlParser *htmlParser;
@property (readonly, nonatomic) NSIndexSet *quotedRegions;
@property (readonly, nonatomic) BOOL hasHumanHeaders;

+ (BOOL)supportsSecureCoding;
+ (BOOL)headersContainInhumanOnes:(id)a0 keys:(id)a1;
+ (id)parseRfc822Headers:(id)a0 htmlContent:(id)a1;
+ (id)parseRfc822:(id)a0 attachmentCallback:(id /* block */)a1;
+ (id)addressItemsFromEmailString:(id)a0;
+ (id)dateFromEmailString:(id)a0;
+ (id)decodeEncodedWordsIn:(id)a0;
+ (id)decodeQuotedPrintable:(id)a0 charset:(unsigned long long)a1 rfc2047UnderscoreAsSpace:(BOOL)a2;
+ (id)formatFlowed:(id)a0 delSp:(BOOL)a1;
+ (BOOL)headerDictionaryContainsInhumanHeaders:(id)a0;
+ (id)htmlBodyFromRfc822:(id)a0 headers:(id)a1 attachmentCallback:(id /* block */)a2;
+ (id)htmlFromPlainTextBody:(id)a0;
+ (id)parseHeaders:(id)a0;
+ (id)parseParameterizedHeaderValue:(id)a0;
+ (id)parseRfc822:(id)a0;
+ (id)parseRfc822Headers:(id)a0 htmlContent:(id)a1 source:(id)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfBodyFromRfc822:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfHeadersFromRfc822:(id)a0;
+ (id)simpleMailMessageFromHeaders:(id)a0;
+ (id)stripTrailingASCIIHSpace:(id)a0;
+ (id)subjectByCleaningPrefixesInSubject:(id)a0;
+ (id)uudecode:(id)a0;

- (id)asDictionary;
- (long long)contentLength;
- (void)encodeWithCoder:(id)a0;
- (id)body;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithSearchableItem:(id)a0;
- (id)description;
- (id)author;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)textContent;
- (id)initWithMessageDictionary:(id)a0;
- (id)headersDictionary;
- (id)allRecipients;
- (id)initForBuilding;
- (id)removeBrackets:(id)a0;
- (void)_clearExistingHtml;
- (id)createNewSearchableItem;
- (id)createNewSearchableItemWithSource:(id)a0 uniqueIdentifier:(id)a1 domainIdentifier:(id)a2;
- (id)dataDetectorMatchesWithSignature;
- (BOOL)hasRecipientFromSameDomainAsSender;
- (id)initWithMailContentEvent:(id)a0 contentProtection:(id)a1 htmlParser:(id)a2;
- (BOOL)isEqualToSimpleMailMessage:(id)a0;
- (BOOL)isInhumanContentNoncached;
- (id)senderDomain;
- (id)spotlightBundleIdentifier;
- (id)spotlightUniqueIdentifier;

@end
