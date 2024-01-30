@class IKJSMediaItem, NSString, NSArray, NSDictionary, IKAppContext, NSNumber;
@protocol IKAppMediaItem;

@interface IKAppMediaItemBridge : NSObject

@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly, weak, nonatomic) IKJSMediaItem *jsMediaItem;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *contentRatingDomain;
@property (retain, nonatomic) NSNumber *contentRatingRanking;
@property (retain, nonatomic) NSString *artworkImageURL;
@property (retain, nonatomic) NSString *artworkImageSrcset;
@property (retain, nonatomic) NSString *ratingBadge;
@property (nonatomic) BOOL isExplicit;
@property (retain, nonatomic) NSNumber *resumeTime;
@property (retain, nonatomic) NSArray *interstitials;
@property (retain, nonatomic) NSArray *chapterGroups;
@property (retain, nonatomic) NSDictionary *extraMetadata;
@property (nonatomic) double contentProposalPresentationTime;
@property (nonatomic) double contentProposalAutomaticAcceptanceInterval;
@property (readonly, weak, nonatomic) id<IKAppMediaItem> appMediaItem;

- (void)cleanup;
- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 jsMediaItem:(id)a1;
- (void)_evaluateDelegateBlockSync:(id /* block */)a0;
- (void)_resolveArtworkImageURL;
- (void)loadCertificateDataForURL:(id)a0 withCallback:(id /* block */)a1;
- (void)loadContentIdentifierDataForURL:(id)a0 withCallback:(id /* block */)a1;
- (void)loadKeyDataForURL:(id)a0 keyRequestData:(id)a1 withCallback:(id /* block */)a2;
- (void)prepareForLoadingWithCallback:(id /* block */)a0;

@end
