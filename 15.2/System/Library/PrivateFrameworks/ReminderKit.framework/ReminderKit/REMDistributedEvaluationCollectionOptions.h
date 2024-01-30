@class NSURL;

@interface REMDistributedEvaluationCollectionOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL includeListNames;
@property (nonatomic) BOOL includeReminderTitles;
@property (nonatomic) BOOL includeListNameFuzzedEmbeddings;
@property (nonatomic) BOOL includeReminderTitleFuzzedEmbeddings;
@property (nonatomic) BOOL includeSystemLanguage;
@property (nonatomic) BOOL includeSystemTimezone;
@property (nonatomic) BOOL includeAccountType;
@property (nonatomic) BOOL includeListGroupInfo;
@property (nonatomic) BOOL includeReminderTitleSaltedHash;
@property (nonatomic) BOOL includeDates;
@property (nonatomic) BOOL includeDayOfWeek;
@property (nonatomic) BOOL includeRecurrenceInfo;
@property (nonatomic) BOOL includeLocationInfo;
@property (nonatomic) BOOL includeAttachmentUTIs;
@property (nonatomic) BOOL includeRemindMeWhenMessagingInfo;
@property (nonatomic) BOOL includeAlarmDates;
@property (nonatomic) BOOL includeSubtaskInfo;
@property (nonatomic) BOOL includeUserActivityInfo;
@property (nonatomic) BOOL includeIsFlagged;
@property (nonatomic) BOOL includePriority;
@property (nonatomic) BOOL relevantWordTagsIncludeOtherWord;
@property (nonatomic) BOOL includeReminderTitleCategoryFilteredStopWords;
@property (nonatomic) BOOL includeReminderTitleCategoryUniversalGrammar;
@property (nonatomic) BOOL includeReminderTitleCategorySentence2Vec;
@property (nonatomic) double reminderTitleCategoryDistanceTolerance;
@property (retain, nonatomic) NSURL *reminderTitleCategoryEmbeddingURL;
@property (nonatomic) unsigned long long dateResolutionInSeconds;
@property (nonatomic) unsigned long long creationDateWithinDays;

+ (id)_attachmentURLFromFilenameWithKey:(id)a0 inJSONRepresentation:(id)a1 attachmentURLs:(id)a2 error:(id *)a3;
+ (id)optionsWithDefaultValues;
+ (id)optionsWithEverythingOff;
+ (id)optionsFromJSONRepresentation:(id)a0 attachmentURLs:(id)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;

@end
