@class NSData, NSString, NSDate, PRSRankingItem, NSMutableDictionary, NSMutableArray, SFPunchout, NSNumber;

@interface SFSearchResult_SpotlightExtras : SFSearchResult <NSSecureCoding> {
    SFPunchout *_cachedPunchout;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL hasTextContentMatch;
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
@property (retain, nonatomic) NSString *relatedAppIdentifier;
@property (retain, nonatomic) NSNumber *displayOrder;
@property (retain) PRSRankingItem *rankingItem;
@property (retain, nonatomic) NSData *suggestionsFeedbackData;
@property (nonatomic) unsigned int feedbackBlockId;
@property (nonatomic) BOOL hasCommunicationContent;
@property (nonatomic) BOOL hasTextContent;
@property (nonatomic) unsigned long long predictionsFeedbackActionType;
@property (nonatomic) BOOL forceNoTopHit;
@property (nonatomic) BOOL isAppClip;
@property (nonatomic) BOOL isWebClip;
@property (nonatomic) BOOL isSafariTopHit;
@property (retain, nonatomic) NSData *attributeData;

+ (void)initialize;

- (id)initWithResult:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)init;
- (void)setUrl:(id)a0;
- (void).cxx_destruct;
- (id)punchout;
- (void)clearBackendData;
- (id)initWithIdentifier:(id)a0 bundleIdentifier:(id)a1 protectionClass:(id)a2 attributeKeys:(id)a3 attributeValues:(id)a4;
- (id)initWithResult:(id)a0 groupId:(id)a1;
- (BOOL)isSafariTopHitForQuery:(id)a0;
- (void)setFeedbackPropertiesOnResultCopy:(id)a0;
- (id)ttrDescription;
- (id)valueForAttribute:(id)a0 withType:(Class)a1;

@end
