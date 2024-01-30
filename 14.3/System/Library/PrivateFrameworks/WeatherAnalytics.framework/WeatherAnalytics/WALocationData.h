@class NSString, NSNumber;

@interface WALocationData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *latitude;
@property (readonly, nonatomic) NSNumber *longitude;

- (id)toDict;
- (void).cxx_destruct;
- (id)initWithLatitude:(id)a0 longitude:(id)a1;

@end
