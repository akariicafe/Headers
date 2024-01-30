@class NSString, NSArray, SKUIArtwork;

@interface SKUIGiftCharity : NSObject

@property (readonly, nonatomic) NSString *amountDisclaimer;
@property (readonly, nonatomic) NSString *charityDescription;
@property (readonly, nonatomic) NSString *legalText;
@property (readonly, nonatomic) NSString *legalText2;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *donationAmounts;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) SKUIArtwork *logoArtwork;

- (void).cxx_destruct;
- (id)initWithCharityDictionary:(id)a0;

@end
