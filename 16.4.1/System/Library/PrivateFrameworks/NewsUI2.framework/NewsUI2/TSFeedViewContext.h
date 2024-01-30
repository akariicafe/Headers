@class NSString, NSURL;

@interface TSFeedViewContext : NSObject {
    void /* unknown type, empty encoding */ feedTagType;
    void /* unknown type, empty encoding */ previousArticleID;
    void /* unknown type, empty encoding */ sourceURL;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ tagName;
    void /* unknown type, empty encoding */ sourceApplication;
    void /* unknown type, empty encoding */ userActivityType;
    void /* unknown type, empty encoding */ sourceSearchText;
    void /* unknown type, empty encoding */ adPreviewID;
    void /* unknown type, empty encoding */ adPreviewSessionID;
    void /* unknown type, empty encoding */ adQToken;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ presentationReason;
@property (nonatomic, retain) void /* unknown type, empty encoding */ feedPickerSection;
@property (nonatomic, retain) void /* unknown type, empty encoding */ feedPickerType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ displayRank;
@property (nonatomic, retain) void /* unknown type, empty encoding */ externalAnalyticsFeedReferrer;
@property (nonatomic, copy) NSString *previousArticleID;
@property (nonatomic, retain) void /* unknown type, empty encoding */ previousArticleVersion;
@property (nonatomic) void /* unknown type, empty encoding */ showSubscribedAlert;
@property (nonatomic, retain) void /* unknown type, empty encoding */ referral;
@property (nonatomic, copy) NSURL *sourceURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *tagName;
@property (nonatomic, copy) NSString *sourceApplication;
@property (nonatomic, copy) NSString *userActivityType;
@property (nonatomic, copy) NSString *sourceSearchText;
@property (nonatomic, copy) NSString *adPreviewID;
@property (nonatomic, copy) NSString *adPreviewSessionID;
@property (nonatomic, copy) NSString *adQToken;
@property (nonatomic, retain) void /* unknown type, empty encoding */ maximumAdRequestsForCurrentAdPreviewID;

- (id)init;
- (void).cxx_destruct;
- (void)setFeedTagType:(unsigned long long)a0;
- (void)setWithAdPreviewID:(id)a0;
- (void)setWithAdPreviewSessionID:(id)a0;
- (void)setWithAdQToken:(id)a0;
- (void)setWithDisplayRank:(long long)a0;
- (void)setWithExternalAnalyticsFeedReferrer:(long long)a0;
- (void)setWithFeedPickerSection:(int)a0;
- (void)setWithFeedPickerType:(int)a0;
- (void)setWithMaximumAdRequestsForCurrentAdPreviewID:(long long)a0;
- (void)setWithPresentationReason:(int)a0;
- (void)setWithPreviousArticleID:(id)a0;
- (void)setWithPreviousArticleVersion:(long long)a0;
- (void)setWithReferral:(id)a0;
- (void)setWithShowSubscribedAlert:(BOOL)a0;
- (void)setWithSourceApplication:(id)a0;
- (void)setWithSourceSearchText:(id)a0;
- (void)setWithSourceURL:(id)a0;
- (void)setWithUserActivityType:(id)a0;

@end
