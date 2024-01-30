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

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void)setOrganizer:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)applyPlaceHolder;
- (void)clearPlaceHolder;
- (void)setObject:(id)a0 forDCCPT:(int)a1;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (id)exceptionDate;
- (void)setExceptionDate:(id)a0;
- (void)postProcessApplicationData;
- (BOOL)saveToCalendarWithExistingRecord:(void *)a0 intoCalendar:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3 account:(id)a4;
- (id)unactionableICSRepresentationForAccount:(id)a0;
- (void)takeValuesFromParentEmailForAccount:(id)a0;
- (BOOL)cachedOrganizerIsSelfWithAccount:(id)a0;
- (void)setDTStamp:(id)a0;
- (void)_determineSelfnessWithLocalEvent:(void *)a0 forAccount:(id)a1;
- (BOOL)_bailIfNotNewestDataForAccount:(id)a0;
- (BOOL)shouldUseInMemoryAttendeesForAccount:(id)a0 numExistingAttendees:(unsigned long long)a1;
- (void)_setReminderSecsBefore:(id)a0;
- (void)saveEmailServerIdAndUpdateNotificationToRecord:(void *)a0 account:(id)a1;
- (BOOL)saveResponseCommentToCalendarWithExistingRecord:(void *)a0;
- (BOOL)saveForwardeesToCalendarWithExistingRecord:(void *)a0;
- (BOOL)saveEmailServerIdToCalendarWithExistingRecord:(void *)a0 intoCalendar:(void *)a1 account:(id)a2;
- (BOOL)writeInviteToCalDBCreateAsRejected:(BOOL)a0 defaultCalendar:(void *)a1 account:(id)a2;

@end
