@class NSDate;

@interface PXSharedAlbumActivityAccompanyingInboxGadgetProvider : PXHorizontalCollectionGadgetProvider <PXForYouRankable>

@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)initWithContentGadgetProvider:(id)a0 title:(id)a1;
- (id)initWithContentGadgetProvider:(id)a0 title:(id)a1 horizontalCollectionGadgetClass:(Class)a2;
- (id)initWithIdentifier:(id)a0 contentGadgetProvider:(id)a1 title:(id)a2 horizontalCollectionGadgetClass:(Class)a3;

@end
