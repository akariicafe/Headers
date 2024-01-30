@class ICSDate, NSMutableDictionary;

@interface CalDAVOccurrenceChange : NSObject

@property (retain, nonatomic) NSMutableDictionary *changes;
@property (nonatomic) BOOL isMaster;
@property (retain, nonatomic) ICSDate *recurrenceID;
@property (readonly, nonatomic) BOOL dateTimeChanged;
@property (readonly, nonatomic) BOOL startTimeChanged;
@property (readonly, nonatomic) BOOL endTimeChanged;
@property (readonly, nonatomic) BOOL timeZoneChanged;
@property (readonly, nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) BOOL summaryChanged;
@property (readonly, nonatomic) BOOL urlChanged;
@property (readonly, nonatomic) BOOL descriptionChanged;
@property (readonly, nonatomic) BOOL statusChanged;
@property (readonly, nonatomic) BOOL attendeesChanged;
@property (readonly, nonatomic) BOOL attachmentsChanged;
@property (readonly, nonatomic) BOOL recurrenceChanged;
@property (readonly, nonatomic) BOOL participationChanged;
@property (readonly, nonatomic) BOOL privateCommentChanged;
@property (readonly, nonatomic) BOOL proposedStartDateChanged;

+ (id)changeWithItem:(id)a0;
+ (id)changeWithOccurrenceID:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addChangedParameter:(id)a0 ofProperty:(id)a1;
- (void)addChangedProperty:(id)a0;
- (BOOL)didParameterChange:(id)a0 onProperty:(id)a1;
- (BOOL)didPropertyChange:(id)a0;
- (id)initWithOccurrenceID:(id)a0;

@end
