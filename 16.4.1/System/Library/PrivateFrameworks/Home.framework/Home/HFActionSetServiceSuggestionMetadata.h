@class NSString, NSArray;

@interface HFActionSetServiceSuggestionMetadata : NSObject

@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *primaryCharacteristicType;
@property (readonly, nonatomic) NSArray *secondaryCharacteristicTypes;

+ (id)metadataForServiceType:(id)a0;

- (void).cxx_destruct;
- (id)initWithServiceType:(id)a0 primaryCharacteristicType:(id)a1 secondaryCharacteristicTypes:(id)a2;

@end
