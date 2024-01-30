@class NSString;

@interface TLKArrangementItem : NSObject <NUIArrangementItem>

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)effectiveBaselineOffsetFromContentBottom;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (float)contentHuggingPriorityForAxis:(long long)a0;
- (float)contentCompressionResistancePriorityForAxis:(long long)a0;

@end
