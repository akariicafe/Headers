@protocol STSSearchBarDelegate;

@interface STSSearchBar : UISearchBar {
    BOOL _clickBeganInSearchBar;
}

@property (weak, nonatomic) id<STSSearchBarDelegate> stsDelegate;

- (void).cxx_destruct;

@end
