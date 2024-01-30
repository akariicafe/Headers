@class SGEvent, NSString;

@interface SGRealtimeEvent : NSObject <NSSecureCoding, NSCopying, SGRealtimeSuggestion>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int state;
@property (readonly, nonatomic) SGEvent *event;
@property (readonly, nonatomic) NSString *eventIdentifier;
@property (readonly, nonatomic) NSString *sourceMessageId;
@property (readonly, nonatomic) BOOL isHarvested;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)realtimeEventForNearDuplicateEvent:(id)a0;
+ (id)realtimeEventForNearDuplicateEvent:(id)a0 harvested:(BOOL)a1;
+ (id)realtimeEventForDuplicateEvent:(id)a0 eventIdentifier:(id)a1 harvested:(BOOL)a2;
+ (id)realtimeEventForNewEvent:(id)a0 harvested:(BOOL)a1;
+ (id)realtimeEventUpdateToEvent:(id)a0 withNewValues:(id)a1;
+ (id)realtimeEventForDuplicateEvent:(id)a0 eventIdentifier:(id)a1;
+ (id)realtimeEventUpdateToEvent:(id)a0 withNewValues:(id)a1 harvested:(BOOL)a2;
+ (id)realtimeEventForCanceledEvent:(id)a0 eventIdentifier:(id)a1 harvested:(BOOL)a2;
+ (id)realtimeEventForExtractionExceptionWithSourceMessageId:(id)a0;
+ (id)realtimeEventForNewEvent:(id)a0;
+ (id)realtimeEventForCanceledEvent:(id)a0 eventIdentifier:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithState:(int)a0 event:(id)a1 eventIdentifier:(id)a2 harvested:(BOOL)a3;
- (id)initWithState:(int)a0 event:(id)a1 eventIdentifier:(id)a2 harvested:(BOOL)a3 sourceMessageId:(id)a4;
- (BOOL)isEqualToRealtimeEvent:(id)a0;

@end
