@class NSString, UISegmentedControl;

@interface CKDetailsSegmentedControlCell : CKDetailsCell <CKDetailsCell>

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldHighlight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
