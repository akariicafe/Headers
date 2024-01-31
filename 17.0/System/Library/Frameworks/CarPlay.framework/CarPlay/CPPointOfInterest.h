@class CPTextButton, NSUUID, NSString, UIImage, MKMapItem, CPImageSet;

@interface CPPointOfInterest : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } pinImageSize;
@property (class, readonly, nonatomic) struct CGSize { double x0; double x1; } selectedPinImageSize;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) CPImageSet *pinImageSet;
@property (retain, nonatomic) CPImageSet *selectedPinImageSet;
@property (retain, nonatomic) MKMapItem *location;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *summary;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *detailSubtitle;
@property (copy, nonatomic) NSString *detailSummary;
@property (retain, nonatomic) UIImage *pinImage;
@property (retain, nonatomic) UIImage *selectedPinImage;
@property (retain, nonatomic) CPTextButton *primaryButton;
@property (retain, nonatomic) CPTextButton *secondaryButton;
@property (retain, nonatomic) id userInfo;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocation:(id)a0 title:(id)a1 subtitle:(id)a2 summary:(id)a3 detailTitle:(id)a4 detailSubtitle:(id)a5 detailSummary:(id)a6 pinImage:(id)a7;
- (id)initWithLocation:(id)a0 title:(id)a1 subtitle:(id)a2 summary:(id)a3 detailTitle:(id)a4 detailSubtitle:(id)a5 detailSummary:(id)a6 pinImage:(id)a7 selectedPinImage:(id)a8;
- (BOOL)isEqualToPointOfInterest:(id)a0;
- (id)pinImage;
- (id)selectedPinImage;
- (void)setPinImage:(id)a0;
- (void)setSelectedPinImage:(id)a0;

@end
