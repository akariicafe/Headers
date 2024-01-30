@class SearchUIImageView, NSString, TLKStackView;

@interface SearchUITwitterCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>

@property (retain, nonatomic) TLKStackView *contentView;
@property (retain, nonatomic) SearchUIImageView *pictureView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
