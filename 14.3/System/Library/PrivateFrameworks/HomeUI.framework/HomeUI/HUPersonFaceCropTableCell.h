@class NSArray, UIImageView, UIImage, HMFaceCrop, HFItem, NSString;
@protocol HUResizableCellDelegate;

@interface HUPersonFaceCropTableCell : UITableViewCell <HUCellProtocol>

@property (retain, nonatomic) HMFaceCrop *personFaceCrop;
@property (retain, nonatomic) UIImage *faceImage;
@property (retain, nonatomic) UIImageView *faceCropView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id<HUResizableCellDelegate> resizingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
