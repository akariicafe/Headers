@class NSIndexSet, NSDictionary;

@interface PXCuratedLibraryLayoutSnapshotGeometryDescriptor : NSObject {
    NSDictionary *_sectionGeometryDescriptorsByIndexPath;
    double _intersectionSpacing;
}

@property (readonly, nonatomic) unsigned long long dataSourceIdentifier;
@property (readonly, nonatomic) unsigned long long skimmingDataSourceIdentifier;
@property (readonly, nonatomic) long long zoomLevel;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleRect;
@property (nonatomic) struct CGPoint { double x; double y; } offset;
@property (readonly, nonatomic) NSIndexSet *sections;

- (id)init;
- (void).cxx_destruct;
- (id)geometryDescriptorForSectionAtIndexPath:(struct PXSimpleIndexPath { unsigned long long x0; long long x1; long long x2; long long x3; })a0;
- (id)description;
- (void)compactifySectionsBeyondVisibleRectWithAnchorSection:(long long)a0;
- (void)extrapolateSectionsBetween:(long long)a0 and:(long long)a1 withAnchorSection:(long long)a2;
- (id)initWithLayout:(id)a0;

@end
