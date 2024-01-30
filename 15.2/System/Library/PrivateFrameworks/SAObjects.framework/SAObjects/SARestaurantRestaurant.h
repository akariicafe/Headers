@class NSArray, NSURL;

@interface SARestaurantRestaurant : SALocalSearchBusiness2

@property (copy, nonatomic) NSArray *attributeSet;
@property (copy, nonatomic) NSArray *makeReservationPunchOuts;
@property (copy, nonatomic) NSURL *menuLink;
@property (copy, nonatomic) NSArray *openings;
@property (copy, nonatomic) NSArray *orderDeliveryPunchOuts;

+ (id)restaurant;
+ (id)restaurantWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
