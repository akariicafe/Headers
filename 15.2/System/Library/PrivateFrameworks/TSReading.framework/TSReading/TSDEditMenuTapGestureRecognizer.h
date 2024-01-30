@class TSDRep;

@interface TSDEditMenuTapGestureRecognizer : UITapGestureRecognizer {
    TSDRep *mTouchedRep;
}

@property (nonatomic) BOOL ignoreTargetAction;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)reset;
- (id)touchedRep;

@end
