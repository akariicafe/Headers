@interface TDNamedArtworkProduction : TDSimpleArtworkElementProduction

@property (nonatomic) BOOL hasCustomDateOfLastChange;

- (void)processRendition:(id)a0 withBackstop:(id)a1;
- (void)setDateOfLastChange:(id)a0;

@end
