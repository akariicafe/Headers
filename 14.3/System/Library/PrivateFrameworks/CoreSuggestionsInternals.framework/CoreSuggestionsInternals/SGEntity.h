@class NSData, NSString, SGRecordId, SGSimpleTimeRange, CSPerson, SGDuplicateKey, NSSet, NSMutableSet, SGExtractionInfo;

@interface SGEntity : NSObject {
    NSMutableSet *_tags;
    NSSet *_tagsSnapshot;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _tagsLock;
}

@property (retain, nonatomic) SGRecordId *recordId;
@property (retain, nonatomic) SGDuplicateKey *duplicateKey;
@property (retain, nonatomic) SGExtractionInfo *extractionInfo;
@property (copy, nonatomic) NSString *sourceKey;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } contentRangeOfInterest;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *authorNickname;
@property (copy, nonatomic) NSString *authorPhotoPath;
@property (retain, nonatomic) CSPerson *author;
@property (nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } creationTimestamp;
@property (nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } lastModifiedTimestamp;
@property (retain, nonatomic) SGSimpleTimeRange *timeRange;
@property (copy, nonatomic) NSData *structuredData;
@property (nonatomic) double quality;
@property (retain, nonatomic) NSMutableSet *locations;
@property (nonatomic) long long masterEntityId;
@property (nonatomic) long long groupId;
@property (nonatomic) unsigned int state;
@property (copy, nonatomic) NSString *operatingSystemVersion;

- (id)fieldsToSaveOnConfirmation;
- (id)extraKeyTag;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (id)loadOrigin:(id)a0;
- (void)dealloc;
- (BOOL)isEqualToEntity:(id)a0;
- (void)validate;
- (id)templateShortName;
- (unsigned long long)hash;
- (BOOL)isInhuman;
- (void)addTag:(id)a0;
- (id)loggingIdentifier;
- (BOOL)isNaturalLanguageEvent;
- (id)description;
- (BOOL)isFromForwardedMessage;
- (BOOL)isEqual:(id)a0;
- (id)initWithEntity:(id)a0;
- (BOOL)hasTag:(id)a0;
- (id)tags;
- (BOOL)isPartiallyDownloaded;

@end
