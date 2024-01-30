@interface _UIDynamicAnimationActiveValue : NSObject {
    double _boundaryPull;
    id _applier;
    unsigned char _lowerBoundary : 1;
    unsigned char _upperBoundary : 1;
}

@property (nonatomic) double value;
@property (nonatomic) double minimumActiveValue;
@property (nonatomic) double maximumActiveValue;
@property (nonatomic) int type;

+ (id)activeValue:(double)a0 ofType:(int)a1;
+ (id)lowerBoundary:(double)a0 ofType:(int)a1;
+ (id)upperBoundary:(double)a0 ofType:(int)a1;

- (void)_appendDescriptionToString:(id)a0 atLevel:(int)a1;
- (void)dealloc;
- (id)init;
- (id)description;
- (id /* block */)_applier;
- (double)_boundaryPull;
- (BOOL)_isLowerBoundary;
- (BOOL)_isUpperBoundary;
- (void)_setBoundaryPull:(double)a0;

@end
