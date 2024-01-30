@class NSArray;

@interface CKFeedCollectionViewSectionLayoutInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct CGSize { double width; double height; } headerSize;
@property (nonatomic) struct CGSize { double width; double height; } footerSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (retain, nonatomic) NSArray *fixedLayoutAttributes;
@property (retain, nonatomic) NSArray *tileLayoutAttributes;
@property (retain, nonatomic) NSArray *floatingLayoutAttributes;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) long long sectionType;
@property (nonatomic) long long previousVisibleSection;
@property (nonatomic) long long nextVisibleSection;
@property (nonatomic) long long firstJoinedSection;
@property (nonatomic) long long lastJoinedSection;
@property (retain, nonatomic) id groupID;
@property (nonatomic) long long numberOfTilesOmitted;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)init;
- (void).cxx_destruct;

@end
