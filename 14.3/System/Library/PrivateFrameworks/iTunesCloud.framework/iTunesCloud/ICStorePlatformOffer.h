@class NSArray, NSString, NSDictionary, NSNumber;

@interface ICStorePlatformOffer : NSObject {
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSArray *assets;
@property (readonly, copy, nonatomic) NSString *buyParameters;
@property (readonly, copy, nonatomic) NSString *formattedPrice;
@property (readonly, copy, nonatomic) NSString *offerType;
@property (readonly, copy, nonatomic) NSNumber *price;

- (id)initWithResponseDictionary:(id)a0;
- (void).cxx_destruct;

@end
