@class UIMenu, UIViewController, NSString, NSArray, VNBarcodeObservation, BCSAction, VKQuad;

@interface VKCMRCDataDetectorElement : VKCBaseDataDetectorElement <BCSActionDelegate, NSSecureCoding> {
    NSArray *_boundingQuads;
    NSArray *_children;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) VNBarcodeObservation *barcodeObservation;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (retain, nonatomic) VKQuad *quad;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (nonatomic) BOOL childrenCreated;
@property (retain, nonatomic) BCSAction *barcodeAction;
@property (readonly, nonatomic) UIMenu *mrcMenu;
@property (weak, nonatomic) UIViewController *presentingViewControllerForMrcAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)presentingViewControllerForAction:(id)a0;
- (id)stringValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)children;
- (void).cxx_destruct;
- (id)boundingQuads;
- (id)scannerResult;
- (void)createChildrenIfNecessary;
- (id)debugMenu;
- (id)initWithBarcodeObservation:(id)a0 action:(id)a1;
- (BOOL)isMRCDataDetector;

@end
