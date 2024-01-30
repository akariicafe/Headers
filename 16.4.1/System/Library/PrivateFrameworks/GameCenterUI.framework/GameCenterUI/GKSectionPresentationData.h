@interface GKSectionPresentationData : NSObject

@property (nonatomic) long long section;
@property (nonatomic) double headerMinY;
@property (nonatomic) double headerMaxY;
@property (nonatomic) double itemsMinY;
@property (nonatomic) double itemsMaxY;
@property (nonatomic) double footerMinY;
@property (nonatomic) double footerMaxY;
@property (nonatomic) double minY;
@property (nonatomic) double maxY;
@property (nonatomic) double showMoreMaxY;
@property (nonatomic) unsigned long long numHeaders;
@property (nonatomic) unsigned long long numFooters;
@property (nonatomic) unsigned long long numOverlays;
@property (nonatomic) unsigned long long numItems;
@property (nonatomic) unsigned long long overlayOffset;

- (id)description;
- (id)initWithSection:(long long)a0 presentationData:(id)a1;
- (void)updateWithLayoutAttributes:(id)a0 supplementaryLocation:(unsigned long long)a1;

@end
