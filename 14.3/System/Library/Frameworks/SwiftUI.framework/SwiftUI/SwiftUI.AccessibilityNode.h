@class NSString, _TtC7SwiftUI17HostingScrollView, NSArray, UIBezierPath, NSAttributedString;

@interface SwiftUI.AccessibilityNode : NSObject <AXContainerDataSeries> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ children;
    void /* unknown type, empty encoding */ parent;
    void /* unknown type, empty encoding */ viewRendererHost;
    void /* unknown type, empty encoding */ oldAttachmentForNotification;
    void /* unknown type, empty encoding */ attachmentsStorage;
    void /* unknown type, empty encoding */ cachedCombinedAttachment;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ needsUpdatePath;
    void /* unknown type, empty encoding */ needsGlobalFrameUpdate;
    void /* unknown type, empty encoding */ focusableAncestor;
    void /* unknown type, empty encoding */ relationshipScope;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) _TtC7SwiftUI17HostingScrollView *enclosingHostingScrollView;
@property (nonatomic) BOOL isAccessibilityElement;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property (nonatomic, copy) NSArray *accessibilityAttributedUserInputLabels;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, retain) NSAttributedString *accessibilityAttributedHint;
@property (nonatomic, copy) NSString *accessibilityLanguage;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;
@property (nonatomic, copy) NSArray *accessibilityElements;
@property (nonatomic) struct CGPoint { double x0; double x1; } accessibilityActivationPoint;
@property (nonatomic) BOOL accessibilityViewIsModal;
@property (nonatomic) BOOL accessibilityElementsHidden;
@property (nonatomic) BOOL shouldGroupAccessibilityChildren;
@property (nonatomic) long long accessibilityContainerType;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic, copy) NSArray *accessibilityCustomActions;
@property (nonatomic, readonly) NSArray *_accessibilityUserDefinedLinkedUIElements;
@property (nonatomic, copy) NSString *accessibilityIdentifier;

- (id)_accessibilityClassName;
- (BOOL)_accessibilityScrollToVisible;
- (id)accessibilityURL;
- (double)_accessibilityMinValue;
- (BOOL)_internal_handleCustomActionWithUiAction:(id)a0;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityMaxValue;
- (id)_accessibilityRoleDescription;
- (double)_accessibilityNumberValue;
- (long long)_accessibilityExpandedStatus;
- (id)_accessibilityDataSeriesName;
- (long long)_accessibilityDataSeriesType;
- (id)_accessibilityDataSeriesValuesForAxis:(long long)a0;
- (BOOL)_accessibilityDataSeriesSupportsSummarization;
- (BOOL)_accessibilityDataSeriesSupportsSonification;
- (BOOL)_accessibilityDataSeriesIncludesTrendlineInSonification;
- (id)_accessibilityDataSeriesTitleForAxis:(long long)a0;
- (double)_accessibilityDataSeriesSonificationDuration;
- (id)_accessibilityDataSeriesUnitLabelForAxis:(long long)a0;
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)a0;
- (id)_accessibilityDataSeriesMaximumValueForAxis:(long long)a0;
- (id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)a0;
- (id)_accessibilityDataSeriesValueDescriptionForPosition:(double)a0 axis:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (long long)accessibilityElementCount;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityActivate;

@end
