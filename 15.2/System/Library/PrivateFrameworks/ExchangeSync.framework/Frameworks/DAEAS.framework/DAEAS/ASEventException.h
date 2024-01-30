@class NSMutableDictionary, NSDate, ASEvent, NSNumber;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *placeHolder;
@property (weak, nonatomic) ASEvent *originalEvent;
@property (retain, nonatomic) NSNumber *isDeleted;
@property (retain, nonatomic) NSDate *exceptionStartTime;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;
+ (id)eventExceptionWithCalEvent:(void *)a0 originalEvent:(id)a1 account:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)loadClientIDs;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)a0 forDCCPT:(int)a1;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (id)exceptionDate;
- (void)setExceptionDate:(id)a0;
- (void)postProcessApplicationData;
- (void)appendActiveSyncDataForTask:(id)a0 toWBXMLData:(id)a1;
- (BOOL)deleteFromCalendar;
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)a0;
- (id)initWithCalEvent:(void *)a0 originalEvent:(id)a1 account:(id)a2;
- (id)initWithExceptionStartTime:(id)a0;
- (id)serverIdForCalFrameworkWithParentEvent:(id)a0;
- (void)saveToCalendarWithParentASEvent:(id)a0 existingRecord:(void *)a1 intoCalendar:(void *)a2 shouldMergeProperties:(BOOL)a3 outMergeDidChooseLocalProperties:(BOOL *)a4 account:(id)a5;
- (void)takeValuesFromParentForAccount:(id)a0;
- (BOOL)verifyExternalIds;
- (BOOL)hasOccurrenceInTheFuture;
- (BOOL)fillOutMissingExternalIds;
- (id)serverIdForCalFrameworkWithParentServerId:(id)a0;
- (id)_transformedExceptionStartDateForCalFramework:(id)a0;
- (id)_transformedExceptionStartDateForActiveSync:(id)a0 isFloating:(BOOL)a1;
- (void)_loadAttributesFromCalEvent:(void *)a0 withKnownExceptionDate:(id)a1 forAccount:(id)a2;

@end
