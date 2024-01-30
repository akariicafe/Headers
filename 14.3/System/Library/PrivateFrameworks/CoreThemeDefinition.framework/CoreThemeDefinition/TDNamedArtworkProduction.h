@interface TDNamedArtworkProduction : TDSimpleArtworkElementProduction

@property (nonatomic) BOOL hasCustomDateOfLastChange;

- (void)setDateOfLastChange:(id)a0;
- (void)processRendition:(id)a0 withBackstop:(id)a1;

@end
