@class NSMutableArray;

@interface CPRotatedText : NSObject {
    NSMutableArray *zones;
}

- (void)dealloc;
- (void)makeRotationZonesIn:(id)a0;
- (id)rotationZones;
- (void)addRotationZonesTo:(id)a0;

@end
