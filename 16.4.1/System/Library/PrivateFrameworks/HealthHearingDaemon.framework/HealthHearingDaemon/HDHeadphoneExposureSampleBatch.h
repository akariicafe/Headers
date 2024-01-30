@class NSArray, NSNumber;

@interface HDHeadphoneExposureSampleBatch : NSObject

@property (retain, nonatomic) NSArray *samples;
@property (nonatomic, getter=isJournaled) BOOL journaled;
@property (retain, nonatomic) NSNumber *anchor;
@property (nonatomic) BOOL canTriggerUserNotification;

+ (id)batchWithAddedSamples:(id)a0 anchor:(id)a1;
+ (id)batchWithJournaledSamples:(id)a0;

- (void).cxx_destruct;
- (id)_initWithSamples:(id)a0 journaled:(BOOL)a1 anchor:(id)a2;

@end
