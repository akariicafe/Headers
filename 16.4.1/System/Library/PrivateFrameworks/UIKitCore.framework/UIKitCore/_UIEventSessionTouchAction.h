@interface _UIEventSessionTouchAction : _UIEventSessionAction

@property (nonatomic) long long tapDragState;
@property (nonatomic) long long numFingers;
@property (nonatomic) long long windowSection;

- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (long long)mergeActionIfPossible:(id)a0;
- (id)typeEncoding;

@end
