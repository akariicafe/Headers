@class NSData, NSString, NSDate, PRSRankingItem, NSMutableDictionary, NSMutableArray, SFPunchout, NSNumber;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding> {
    SFPunchout *_cachedPunchout;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *backendData;
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
@property (retain, nonatomic) NSString *personIdentifier;
@property (retain, nonatomic) NSString *personQueryIdentifier;
@property (retain) PRSRankingItem *rankingItem;
@property (retain, nonatomic) NSData *suggestionsFeedbackData;
@property (nonatomic) unsigned int feedbackBlockId;
@property (nonatomic) BOOL hasCommunicationContent;
@property (nonatomic) BOOL hasTextContent;
@property (nonatomic) BOOL hasTextContentMatch;
@property (nonatomic) unsigned long long predictionsFeedbackActionType;
@property (nonatomic) BOOL forceNoTopHit;
@property (nonatomic) BOOL isAppClip;
@property (nonatomic) BOOL isWebClip;
@property (nonatomic) BOOL isSafariTopHit;
@property (retain, nonatomic) NSData *attributeData;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (void)setUrl:(id)a0;
- (id)punchout;
- (id)objectForFeedback;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)valueForAttribute:(id)a0 withType:(Class)a1;
- (void)setPropertiesOnResultCopy:(id)a0;
- (void)clearBackendData;
- (BOOL)isSafariTopHitForQuery:(id)a0;

@end
