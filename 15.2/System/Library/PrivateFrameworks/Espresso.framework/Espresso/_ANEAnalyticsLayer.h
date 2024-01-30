@class NSString, NSNumber;

@interface _ANEAnalyticsLayer : NSObject

@property (readonly, nonatomic) NSString *layerName;
@property (readonly, nonatomic) NSNumber *weight;

+ (id)objectWithName:(id)a0 weight:(id)a1;

- (id)serialize;
- (id)initWithName:(id)a0 weight:(id)a1;
- (void).cxx_destruct;

@end
