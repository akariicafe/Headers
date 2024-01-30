@interface UIViewVectorAnimatableProperty : UIAnimatablePropertyWrapper

@property (readonly, nonatomic) unsigned long long _length;
@property (readonly, nonatomic) const double *_value;
@property (readonly, nonatomic) const double *_presentationValue;
@property (readonly, nonatomic) const double *_velocity;

- (void)_copyValue:(const double *)a0;
- (void)_mutateValue:(id /* block */)a0;
- (void)_mutateVelocity:(id /* block */)a0;
- (void)_copyVelocity:(const double *)a0;
- (id)_vectorAnimatableProperty;
- (id)_initWithLength:(unsigned long long)a0;

@end
