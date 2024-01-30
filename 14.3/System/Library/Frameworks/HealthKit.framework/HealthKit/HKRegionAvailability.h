@class NSArray;

@interface HKRegionAvailability : NSObject

@property (readonly, nonatomic) NSArray *supportedRegions;
@property (readonly, nonatomic) long long version;

- (void).cxx_destruct;
- (id)initWithDeserializedAvailability:(id)a0;

@end
