@class NSArray, NSDictionary;

@interface HKAccessibilityData : NSObject

@property (readonly, nonatomic) NSArray *accessibilityPointData;
@property (readonly, nonatomic) NSDictionary *accessibilitySpans;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPointData:(id)a0 accessibilitySpans:(id)a1;

@end
