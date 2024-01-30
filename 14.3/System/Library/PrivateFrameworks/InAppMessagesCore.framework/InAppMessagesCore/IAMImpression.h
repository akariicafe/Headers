@class NSString, ICInAppMessageEntry, NSDate;

@interface IAMImpression : NSObject

@property (copy, nonatomic) NSString *targetIdentifier;
@property (copy, nonatomic) ICInAppMessageEntry *messageEntry;
@property (readonly, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) int messageType;
@property (copy, nonatomic) NSDate *displayStartTime;
@property (copy, nonatomic) NSDate *displayEndTime;

- (void).cxx_destruct;
- (id)initWithMessageEntry:(id)a0 targetIdentifier:(id)a1;
- (id)reportableMetricsEventDictionary;

@end
