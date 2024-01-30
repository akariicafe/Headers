@class NSNumber, ASEvent, NSDate;

@interface ASRecurrence : ASItem <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *dayOfWeek;
@property (retain, nonatomic) NSNumber *dayOfMonth;
@property (retain, nonatomic) NSNumber *weekOfMonth;
@property (retain, nonatomic) NSNumber *monthOfYear;
@property (retain, nonatomic) NSDate *until;
@property (retain, nonatomic) NSNumber *occurrences;
@property (retain, nonatomic) NSNumber *firstDayOfWeek;
@property (retain, nonatomic) NSNumber *calendarType;
@property (weak, nonatomic) ASEvent *parentEvent;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)appendActiveSyncDataForTask:(id)a0 toWBXMLData:(id)a1;
- (BOOL)_loadAttributesFromCalRecurrence:(void *)a0 parentStartDate:(id)a1 parentItem:(id)a2 useFloatingTimeForAllDayEvents:(BOOL)a3;
- (void)setUntilString:(id)a0;
- (BOOL)_requiresParentEvent;
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)a0;
- (id)_transformedUntilDateForActiveSync:(id)a0;
- (id)initWithCalRecurrence:(void *)a0 parentEvent:(id)a1 useFloatingTimeForAllDayEvents:(BOOL)a2;
- (void)saveToCalendarWithParentASEvent:(id)a0 existingRecord:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 useFloatingTimeForAllDayEvents:(BOOL)a4;
- (void *)_newRecurrenceWithParentStartDate:(id)a0 useFloatingTimeForAllDayEvents:(BOOL)a1;

@end
