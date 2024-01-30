@class NSString, NUAdBannerView, NSDate;

@interface NUAd : NSObject <NUAdContextProvider>

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) NUAdBannerView *bannerView;
@property (readonly, nonatomic) NSString *opportunityIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *loadDate;
@property (retain, nonatomic) NSDate *unloadDate;
@property (nonatomic) unsigned long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)a0;
- (id)initWithBanner:(id)a0 identifier:(id)a1;

@end
