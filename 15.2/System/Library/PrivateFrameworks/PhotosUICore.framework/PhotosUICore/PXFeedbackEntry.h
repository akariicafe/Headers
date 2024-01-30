@class NSString, NSMutableDictionary, NSDictionary, NSDate;

@interface PXFeedbackEntry : NSObject <NSSecureCoding> {
    NSDictionary *_feedbackItemDetails;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *feedbackItemsDict;
@property (nonatomic) long long generalFeedback;
@property (copy, nonatomic) NSString *systemID;
@property (retain, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL alreadyCollected;

+ (id)positiveFeedbackForMemoryDetailsKeys;
+ (id)negativeFeedbackForMemoryDetailsKeys;
+ (id)positiveFeedbackForMemoriesKeys;
+ (id)negativeFeedbackForMemoriesKeys;
+ (id)positiveFeedbackForAutoLoopKeys;
+ (id)negativeFeedbackForAutoLoopKeys;
+ (id)positiveFeedbackForImageQualityKeys;
+ (id)negativeFeedbackForImageQualityKeys;
+ (id)createFakeTestEntry;
+ (id)createFakeTestFeedbackDictionary;

- (id)uniqueID;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)longDescription;
- (id)initWithSystemID:(id)a0 timestamp:(id)a1;
- (BOOL)userLikedResults;
- (id)osKeyForItemKey:(id)a0;
- (id)asTextForItemKey:(id)a0;

@end
