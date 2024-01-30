@class NSString;

@interface ABChangeHistoryEvent : NSObject

@property (readonly, nonatomic) int entityType;
@property (readonly, nonatomic) int eventType;
@property (readonly, nonatomic) long long sequenceNumber;
@property (readonly, nonatomic) int recordID;
@property (readonly, nonatomic) NSString *recordGUID;
@property (readonly, nonatomic) NSString *externalID;
@property (readonly, nonatomic) BOOL imagesChanged;
@property (readonly, nonatomic) int personLink;
@property (readonly, nonatomic) NSString *personLinkUUID;
@property (readonly, nonatomic) NSString *linkToPersonUUID;

+ (id)personDeleteEventWithRecordID:(int)a0 identifier:(id)a1 externalID:(id)a2 personLink:(int)a3;
+ (id)groupAddEventWithRecordID:(int)a0 identifier:(id)a1;
+ (id)groupDeleteEventWithRecordID:(int)a0 identifier:(id)a1 externalID:(id)a2;
+ (id)groupUpdateEventWithRecordID:(int)a0 identifier:(id)a1;
+ (id)groupWithRecordID:(int)a0 identifier:(id)a1 eventType:(int)a2 externalID:(id)a3;
+ (id)linkEventWithRecordID:(int)a0 identifier:(id)a1 linkToIdentifier:(id)a2 unifiedIdentifier:(id)a3;
+ (id)meCardChangedEventWithRecordID:(int)a0 identifier:(id)a1;
+ (id)personAddEventWithRecordID:(int)a0 identifier:(id)a1;
+ (id)personUpdateEventWithRecordID:(int)a0 identifier:(id)a1 imagesChanged:(BOOL)a2 personLink:(int)a3;
+ (id)personWithRecordID:(int)a0 identifier:(id)a1 eventType:(int)a2;
+ (id)personWithRecordID:(int)a0 identifier:(id)a1 eventType:(int)a2 imagesChanged:(BOOL)a3 externalID:(id)a4 personLink:(int)a5;
+ (id)setPreferredImageEventWithRecordID:(int)a0 identifier:(id)a1;
+ (id)setPreferredNameEventWithRecordID:(int)a0 identifier:(id)a1;
+ (id)unifiedPersonAddEventWithUnifiedIdentifier:(id)a0;
+ (id)unifiedPersonDeleteEventWithUnifiedIdentifier:(id)a0;
+ (id)unifiedPersonUpdateEventWithUnifiedIdentifier:(id)a0;
+ (id)unifiedPersonWithIdentifier:(id)a0 eventType:(int)a1;
+ (id)unlinkEventWithRecordID:(int)a0 identifier:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)descriptionForEntityType:(int)a0;
- (id)descriptionForEventType:(int)a0;
- (id)initWithEntityType:(int)a0 eventType:(int)a1 sequenceNumber:(long long)a2 recordID:(int)a3 recordGUID:(id)a4 externalID:(id)a5 imagesChanged:(BOOL)a6 personLink:(int)a7 personLinkUUID:(id)a8 linkToPersonUUID:(id)a9;
- (BOOL)isSequenceNumber:(long long)a0 equalToOther:(long long)a1;

@end
