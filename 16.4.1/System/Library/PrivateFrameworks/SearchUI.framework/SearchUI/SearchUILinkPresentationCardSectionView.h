@class UITapGestureRecognizer, SFLinkPresentationCardSection, LPLinkView;

@interface SearchUILinkPresentationCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) UITapGestureRecognizer *linkPresentationTapped;
@property (retain, nonatomic) LPLinkView *linkView;
@property (retain, nonatomic) SFLinkPresentationCardSection *section;

+ (id)fallbackMetadataWithURL:(id)a0;
+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (id)setupContentView;
- (void)_performCommand;
- (void)fetchMetadataFromMessagesWithURL:(id)a0 completionBlock:(id /* block */)a1;

@end
