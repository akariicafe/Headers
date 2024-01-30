@class NSNumber, NSString, ATXNotificationContext, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsRecord : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _finished;
    long long _outcome;
    long long _endingInteraction;
    NSDate *_publicationDate;
    NSString *_categoryID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_message;
    NSNumber *_numSuppActions;
    NSNumber *_timezone;
    unsigned long long _incomingFeed;
    BOOL _hidden;
    NSDate *_activatedTime;
    NSDate *_unlockedTime;
}

@property (retain, nonatomic) NSString *appName;
@property (retain, nonatomic) NSString *notificationId;
@property (retain, nonatomic) ATXNotificationContext *ctx;
@property (retain, nonatomic) NSDate *creationTime;
@property (retain, nonatomic) NSMutableArray *stream;

+ (id)serializeMetadata:(id)a0 error:(id)a1;
+ (BOOL)isNotificationMetadataFromLockscreen:(id)a0;

- (id)message;
- (BOOL)isExpired;
- (id)json:(BOOL)a0;
- (id)pbmsg;
- (BOOL)isIgnored;
- (void)start;
- (BOOL)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isOnLockscreen;
- (long long)getOutcome;
- (BOOL)hasOrbed;
- (BOOL)hasTappedCoalesceAndIsTopOfPile;
- (long long)getEndingInteraction;
- (id)initWithSerializedMetadata:(id)a0 notificationID:(id)a1 timestamp:(id)a2;
- (BOOL)hasDeviceStateChanged:(long long)a0;
- (long long)findNextEventInStreamAndRecordTime:(id)a0 forType:(long long)a1;
- (id)getSerializedMetadata;
- (id)messageWithGrade:(id)a0 userid:(id)a1;
- (long long)determineEndingInteraction;
- (long long)determineOutcome;
- (BOOL)isEngagement;
- (BOOL)isCleared;
- (BOOL)hasGivenEventType:(long long)a0;
- (id)pbmsgWithGrade:(id)a0 userId:(id)a1;
- (id)initWithATXNotificationsInterface:(id)a0 notificationID:(id)a1 timestamp:(id)a2 motion:(id)a3;

@end
