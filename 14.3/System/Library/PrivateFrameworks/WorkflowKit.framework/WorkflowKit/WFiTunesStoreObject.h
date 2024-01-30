@class NSString, NSDictionary, NSDate, NSNumber;

@interface WFiTunesStoreObject : WFiTunesObject <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *artistID;
@property (readonly, nonatomic) NSString *artistName;
@property (readonly, nonatomic) NSDate *releaseDate;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly, nonatomic) NSString *descriptionText;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)descriptionTextJSONTransformer;

- (void).cxx_destruct;

@end
