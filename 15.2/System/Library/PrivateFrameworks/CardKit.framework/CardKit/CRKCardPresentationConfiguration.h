@class CRSCardRequest;
@protocol CRContent;

@interface CRKCardPresentationConfiguration : NSObject

@property (readonly, nonatomic) CRSCardRequest *cardRequest;
@property (readonly, nonatomic) id<CRContent> content;
@property (nonatomic) BOOL respectsUserConsent;
@property (nonatomic) BOOL loadsBundleProviders;

- (void).cxx_destruct;
- (id)initWithContent:(id)a0;
- (id)initWithCard:(id)a0;
- (id)initWithCardRequest:(id)a0;

@end
