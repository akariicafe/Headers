@class NSString;

@interface IMPodcastOffer : NSObject

@property (retain, nonatomic) NSString *kind;
@property (retain, nonatomic) NSString *priceType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)offerTypeAsFlagBit;

@end
