@interface JFXCompositionSeekRequest : JFXCompositionPlayerRequest

@property (nonatomic) int seekTime;

- (id)description;
- (id)initWithBlock:(id /* block */)a0 withSeekTime:(int)a1;

@end
