@class NSString;
@protocol PUTilingCoordinateSystem;

@interface PUTilingLayoutCoordinateSystem : NSObject <PUTilingCoordinateSystem>

@property (weak, nonatomic) id<PUTilingCoordinateSystem> parentCoordinateSystem;
@property (nonatomic) struct CGPoint { double x; double y; } coordinateSystemOrigin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
