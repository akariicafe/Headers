@class NTKCFaceDetailExpandableDescriptionCell, NSString;
@protocol NTKCFaceDetailDescriptionSectionDelegate;

@interface NTKCFaceDetailDescriptionSectionController : NTKCFaceDetailSectionController <NTKCFaceDetailExpandableDescriptionCellDelegate>

@property (nonatomic) BOOL external;
@property (retain, nonatomic) NTKCFaceDetailExpandableDescriptionCell *cell;
@property (nonatomic) BOOL expanded;
@property (weak, nonatomic) id<NTKCFaceDetailDescriptionSectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_descriptionForFace:(id)a0 inGallery:(BOOL)a1 orExternal:(BOOL)a2;
+ (BOOL)hasDescriptionSectionForFace:(id)a0 inGallery:(BOOL)a1 orExternal:(BOOL)a2;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)_faceDescription;
- (void)descriptionCellDidExpand:(id)a0;
- (void)faceDidChange;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 external:(BOOL)a3;
- (id)titleForHeader;

@end
