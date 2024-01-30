@interface TSKToolbarSpace : NSObject

@property (nonatomic) double width;
@property (nonatomic, getter=isEnabled) BOOL enabled;

+ (id)spaceWithWidth:(double)a0;

@end
