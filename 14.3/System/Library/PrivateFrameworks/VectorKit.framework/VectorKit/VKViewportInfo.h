@class NSDictionary;

@interface VKViewportInfo : NSObject

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) struct { double latitude; double longitude; } centerCoordinate;
@property (nonatomic) float zoomLevel;
@property (nonatomic) long long tileSize;
@property (nonatomic) double pitch;
@property (nonatomic) double yaw;

- (id)initWithDictionaryRepresentation:(id)a0;

@end
