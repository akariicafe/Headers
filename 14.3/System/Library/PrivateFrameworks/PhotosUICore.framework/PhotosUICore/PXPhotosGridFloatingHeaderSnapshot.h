@class NSString, NSAttributedString, PXAssetCollectionReference;

@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo>

@property (readonly, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) NSAttributedString *subtitle;
@property (readonly, nonatomic) PXAssetCollectionReference *assetCollectionReference;
@property (readonly, nonatomic) NSAttributedString *floatingSummaryTitle;
@property (readonly, nonatomic) NSAttributedString *floatingSummarySubtitle;
@property (readonly, nonatomic) BOOL floatingEnableOverview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 assetCollectionReference:(id)a2;

@end
