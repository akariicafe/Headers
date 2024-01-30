@class NSString, NSDictionary, NSData, NSNumber;

@interface PXPlaceAnnotation : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *placeLevel;
@property (readonly, nonatomic) NSString *placeLevelAsString;
@property (retain, nonatomic) NSString *placeName;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *dictionary;

- (id)initWithData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPlaceLevel:(id)a0 placeName:(id)a1;
- (BOOL)isEqualToPlaceAnnotation:(id)a0;

@end
