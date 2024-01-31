@interface CoreAudioKit.AUGenericViewInternal : UIView <UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ hasGroups;
    void /* unknown type, empty encoding */ pathsNeedingPeriodicUpdates;
    void /* unknown type, empty encoding */ scheduledUpdatesTimer;
    void /* unknown type, empty encoding */ showSingleClumpIndex;
    void /* unknown type, empty encoding */ paramDictionary;
    void /* unknown type, empty encoding */ widthInfo;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ auAudioUnit;
@property (nonatomic, retain) void /* unknown type, empty encoding */ owningController;
@property (nonatomic) void /* unknown type, empty encoding */ paramObserverToken;

- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)removeScheduledUpdatesTimer;

@end
