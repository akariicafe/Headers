@interface NTKWorkoutComplicationImageProvider : CLKImageProvider

@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isFrozen) BOOL frozen;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPaused:(BOOL)a0 frozen:(BOOL)a1;

@end
