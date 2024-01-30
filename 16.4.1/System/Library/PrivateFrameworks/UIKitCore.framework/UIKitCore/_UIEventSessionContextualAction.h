@interface _UIEventSessionContextualAction : _UIEventSessionAction

@property (nonatomic) struct CGPoint { double x; double y; } originatingLocation;

- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)typeEncoding;

@end
