@class ARAnchor;

@interface ARHitTestResult : NSObject

@property (retain, nonatomic) ARAnchor *anchor;
@property (nonatomic) double distance;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } localTransform;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } worldTransform;
@property (readonly, nonatomic) unsigned long long type;

- (id)_description:(BOOL)a0;
- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;
- (id)description;

@end
