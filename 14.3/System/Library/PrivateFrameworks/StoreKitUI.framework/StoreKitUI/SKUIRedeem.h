@class NSArray, NSString, NSDictionary, NSURL, UIImage;
@protocol SKUIArtworkProviding;

@interface SKUIRedeem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *downloads;
@property (retain, nonatomic) NSString *inAppPurchase;
@property (copy, nonatomic) NSString *credit;
@property (copy, nonatomic) NSString *balance;
@property (copy, nonatomic) NSString *creditDisplay;
@property (retain, nonatomic) NSDictionary *thankYouDictionary;
@property (retain, nonatomic) NSURL *redirectURL;
@property (retain, nonatomic) NSURL *customizedThankyouURL;
@property (retain, nonatomic) UIImage *headerImage;
@property (retain, nonatomic) id<SKUIArtworkProviding> headerArtworkProvider;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) NSArray *links;
@property (nonatomic) BOOL hideItemView;
@property (nonatomic) double ITunesPassLearnMoreAlertInterval;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
