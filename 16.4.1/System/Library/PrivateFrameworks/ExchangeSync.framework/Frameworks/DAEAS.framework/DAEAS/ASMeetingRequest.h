@class NSMutableDictionary, ASEmailItem, NSString, NSDate, NSNumber, NSArray;

@interface ASMeetingRequest : ASEvent <ASParsingAcceptingTopLevelLeaves, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *placeHolder;
@property (weak, nonatomic) ASEmailItem *parentEmailItem;
@property (retain, nonatomic) NSNumber *instanceType;
@property (retain, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSDate *recurrenceId;
@property (nonatomic) int meetingClassType;
@property (nonatomic) int meetingMessageType;
@property (retain, nonatomic) NSString *cachedParentFolderId;
@property (retain, nonatomic) NSString *cachedParentServerId;
@property (retain, nonatomic) NSString *sender;
@property (retain, nonatomic) NSArray *forwardees;

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (id)asParseRules;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)setOrganizer:(id)a0;
- (BOOL)_bailIfNotNewestDataForAccount:(id)a0;
- (void)_determineSelfnessWithLocalEvent:(void *)a0 forAccount:(id)a1;
- (void)_setReminderSecsBefore:(id)a0;
- (void)applyPlaceHolder;
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)a0;
- (void)clearPlaceHolder;
- (id)exceptionDate;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)postProcessApplicationData;
- (void)saveEmailServerIdAndUpdateNotificationToRecord:(void *)a0 account:(id)a1;
- (BOOL)saveEmailServerIdToCalendarWithExistingRecord:(void *)a0 intoCalendar:(void *)a1 account:(id)a2;
- (BOOL)saveForwardeesToCalendarWithExistingRecord:(void *)a0 account:(id)a1;
- (BOOL)saveResponseCommentToCalendarWithExistingRecord:(void *)a0;
- (BOOL)saveToCalendarWithExistingRecord:(void *)a0 intoCalendar:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (void)setDTStamp:(id)a0;
- (void)setExceptionDate:(id)a0;
- (void)setObject:(id)a0 forDCCPT:(int)a1;
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)a0 numExistingAttendees:(unsigned long long)a1;
- (void)takeValuesFromParentEmailForAccount:(id)a0;
- (id)unactionableICSRepresentationForAccount:(id)a0;
- (BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)a0 defaultCalendar:(void *)a1 account:(id)a2;

@end
