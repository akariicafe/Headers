@class NSLayoutYAxisAnchor, NSString, NSLayoutDimension;

@interface _UIButtonBarLayoutMetrics : NSObject <_UIButtonBarLayoutMetricsData, NSCopying> {
    BOOL _locked;
}

@property (retain, nonatomic) NSLayoutDimension *verticalSizeGuide;
@property (retain, nonatomic) NSLayoutDimension *minimumSpaceGuide;
@property (retain, nonatomic) NSLayoutDimension *flexibleSpaceGuide;
@property (retain, nonatomic) NSLayoutYAxisAnchor *popoverGuideTopAnchor;
@property (retain, nonatomic) NSLayoutDimension *groupSizeGuide;
@property (retain, nonatomic) NSLayoutDimension *groupSpacingGuide;
@property (nonatomic) BOOL createsPopoverLayoutGuides;
@property (nonatomic) BOOL allowsViewWrappers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_copyWithModifications:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_upcastIfReadOnly;

@end
