@class TSDStroke;

@interface TSTTableStrokePresetData : NSObject

@property (retain, nonatomic) TSDStroke *horizontalStroke;
@property (retain, nonatomic) TSDStroke *verticalStroke;
@property (retain, nonatomic) TSDStroke *exteriorStroke;
@property (nonatomic) unsigned int mask;

- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithMask:(unsigned int)a0 horizontalStroke:(id)a1 verticalStroke:(id)a2 exteriorStroke:(id)a3;

@end
