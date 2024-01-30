@class NSSet, NSString, NSDate, FLFollowUpAction;

@interface FLFollowUpNotification : NSObject <NSSecureCoding>

@property (class, readonly, copy) NSSet *defaultOptions;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sqlID;
@property (retain, nonatomic) NSDate *previousNotificationActionDate;
@property (retain, nonatomic) FLFollowUpAction *dismissAction;
@property (retain, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *informativeText;
@property (retain, nonatomic) FLFollowUpAction *activateAction;
@property (retain, nonatomic) FLFollowUpAction *clearAction;
@property (copy, nonatomic) NSString *unlockActionLabel;
@property (nonatomic) double frequency;
@property (nonatomic) double firstNotificationDelay;
@property (copy, nonatomic) NSSet *options;
@property (nonatomic) BOOL forceDelivery;

- (id)init;
- (void).cxx_destruct;
- (id)_optionsData;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_shouldDeliverNotificationWithStringOut:(id *)a0;
- (double)_frequencyDelta;
- (double)_creationDateAugmentedRepeatTimer;
- (BOOL)shouldDeliverNotification;
- (void)set_optionsData:(id)a0;
- (void)recalculateActionDateToAccountForDelay;

@end
