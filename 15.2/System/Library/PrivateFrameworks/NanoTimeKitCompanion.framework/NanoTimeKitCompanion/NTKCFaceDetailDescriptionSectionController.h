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

+ (BOOL)hasDescriptionSectionForFace:(id)a0 inGallery:(BOOL)a1 orExternal:(BOOL)a2;
+ (id)_descriptionForFace:(id)a0 inGallery:(BOOL)a1 orExternal:(BOOL)a2;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)titleForHeader;
- (void)descriptionCellDidExpand:(id)a0;
- (id)_faceDescription;
- (id)initWithTableViewController:(id)a0 face:(id)a1 inGallery:(BOOL)a2 external:(BOOL)a3;
- (void)faceDidChange;

@end
