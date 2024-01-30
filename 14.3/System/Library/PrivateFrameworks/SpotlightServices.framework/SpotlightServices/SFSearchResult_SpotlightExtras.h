@class PRSRankingItem, NSString, SFPunchout, NSData, NSDate, NSNumber, NSMutableArray;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding> {
    SFPunchout *_cachedPunchout;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *protectionClass;
@property (retain, nonatomic) NSNumber *fileIdentifier;
@property (retain, nonatomic) NSNumber *parentFileIdentifier;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSNumber *documentIdentifier;
@property (nonatomic) unsigned __int128 score;
@property (nonatomic) float l2score;
@property (retain, nonatomic) NSString *launchString;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) NSString *userActivityType;
@property (retain, nonatomic) NSMutableArray *duplicatedItems;
@property (retain, nonatomic) NSString *contentURL;
@property (retain) PRSRankingItem *rankingItem;
@property (retain, nonatomic) NSData *suggestionsFeedbackData;
@property (nonatomic) unsigned int feedbackBlockId;
@property (nonatomic) BOOL hasCommunicationContent;
@property (nonatomic) unsigned long long predictionsFeedbackActionType;
@property (nonatomic) BOOL forceNoTopHit;
@property (nonatomic) BOOL isAppClip;
@property (nonatomic) BOOL isWebClip;
@property (nonatomic) BOOL isSafariTopHit;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)punchout;
- (id)objectForFeedback;
- (id)debugDescription;
- (void)setUrl:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setPropertiesOnResultCopy:(id)a0;
- (BOOL)isSafariTopHitForQuery:(id)a0;

@end
