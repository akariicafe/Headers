@class NSString, NSSet;

@interface IconPictureInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSString *UIType;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithUIType:(id)a0 x:(double)a1 y:(double)a2 w:(double)a3 h:(double)a4;

@end
