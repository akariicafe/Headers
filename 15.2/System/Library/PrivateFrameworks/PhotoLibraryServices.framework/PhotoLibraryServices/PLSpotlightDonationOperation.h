@class NSArray, CSSearchableIndex, PLPhotoLibrary;
@protocol PLSpotlightDonationManagerSignpostDelegate;

@interface PLSpotlightDonationOperation : PLSpotlightAsyncOperation

@property (readonly, nonatomic) CSSearchableIndex *searchableIndex;
@property (readonly, copy, nonatomic) NSArray *searchableItems;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (weak, nonatomic) id<PLSpotlightDonationManagerSignpostDelegate> signpostDelegate;

- (id)initWithPhotoLibrary:(id)a0 spotlightSearchableIndex:(id)a1 searchableItems:(id)a2;
- (void)main;
- (void).cxx_destruct;

@end
