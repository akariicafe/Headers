@class TSDRep;

@interface TSDEditMenuTapGestureRecognizer : UITapGestureRecognizer {
    TSDRep *mTouchedRep;
}

@property (nonatomic) BOOL ignoreTargetAction;

- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)touchedRep;

@end
