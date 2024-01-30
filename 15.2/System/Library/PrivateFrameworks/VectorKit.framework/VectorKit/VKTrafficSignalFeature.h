@interface VKTrafficSignalFeature : VKTrafficFeature

@property (readonly, nonatomic) long long type;

+ (id)stringForTrafficSignalType:(long long)a0;

- (void)populateDebugNode:(void *)a0;
- (id)initWithTrafficSignal:(id)a0 onRoute:(id)a1;
- (id)initWithTrafficSignalType:(long long)a0 uniqueIdentifier:(id)a1 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 onRoute:(id)a3;

@end
