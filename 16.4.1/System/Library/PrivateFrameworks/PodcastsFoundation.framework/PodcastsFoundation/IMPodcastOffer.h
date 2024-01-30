@class NSString;

@interface IMPodcastOffer : NSObject

@property (retain, nonatomic) NSString *kind;
@property (retain, nonatomic) NSString *priceType;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)offerTypeAsFlagBit;

@end
