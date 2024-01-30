@class NSString;

@interface HighlightAlerts.HighlightAlertsTileViewController : UIViewController <HealthVisualization.SignificantTimeChangeObserving> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ $__lazy_storage_$_typeImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_bodyLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_descriptionLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_diagramImageView;
    void /* unknown type, empty encoding */ moreDetailsFont;
    void /* unknown type, empty encoding */ descriptionLabelConstraints;
    void /* unknown type, empty encoding */ descriptionBottomSpacingConstraint;
    void /* unknown type, empty encoding */ descriptionToDiagramSpacingConstraint;
    void /* unknown type, empty encoding */ diagramToBottomConstraints;
    void /* unknown type, empty encoding */ bodyLabelToDiagramSpacingConstraint;
    void /* unknown type, empty encoding */ bodyLabelToBottomSpacingConstraint;
    void /* unknown type, empty encoding */ bodyLabelAndIconHorizontalConstraints;
    void /* unknown type, empty encoding */ bodyLabelOnlyHorizontalConstraints;
    void /* unknown type, empty encoding */ bodyLabelVerticalConstraints;
    void /* unknown type, empty encoding */ viewModel;
}

@property (nonatomic, copy) NSString *title;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)handleTap;
- (void)significantTimeChangeDidOccur;

@end
