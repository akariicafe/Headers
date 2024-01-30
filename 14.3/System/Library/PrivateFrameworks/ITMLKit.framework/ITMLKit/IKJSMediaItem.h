@class NSString, NSDictionary, NSArray, NSNumber, IKAppMediaItemBridge;

@interface IKJSMediaItem : IKJSObject <IKJSMediaItem>

@property (readonly, nonatomic) IKAppMediaItemBridge *bridge;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) NSString *contentRatingDomain;
@property (retain, nonatomic) NSNumber *contentRatingRanking;
@property (retain, nonatomic) NSString *artworkImageURL;
@property (retain, nonatomic) NSString *artworkImageSrcset;
@property (nonatomic) BOOL isExplicit;
@property (retain, nonatomic) NSNumber *resumeTime;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) NSArray *interstitials;
@property (retain, nonatomic) NSArray *highlightGroups;

- (void).cxx_destruct;
- (void)dealloc;
- (void)setRatingBadge:(id)a0;
- (id)ratingBadge;
- (void)setContentProposalAutomaticAcceptanceInterval:(double)a0;
- (double)contentProposalAutomaticAcceptanceInterval;
- (void)setContentProposalPresentationTime:(double)a0;
- (double)contentProposalPresentationTime;
- (id)initWithType:(id)a0 :(id)a1;
- (void)loadCertificateDataForURI:(id)a0 withCallback:(id /* block */)a1;
- (void)loadContentIdentifierDataForURI:(id)a0 withCallback:(id /* block */)a1;
- (void)loadKeyDataForURI:(id)a0 requestData:(id)a1 withCallback:(id /* block */)a2;

@end
