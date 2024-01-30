@interface CSProudLockComponent : CSComponent

@property (nonatomic) long long optOutOfAlphaFadesForPageScroll;
@property (nonatomic) BOOL shouldResideInALowerSubview;
@property (nonatomic) BOOL prefersInlineCoaching;

- (id)optOutOfAlphaFadesForPageScroll:(long long)a0;
- (id)prefersInlineCoaching:(BOOL)a0;
- (id)shouldResideInALowerSubview:(BOOL)a0;
- (id)init;

@end
