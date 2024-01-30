@class NSString, NSAttributedString;

@interface HUQuickControlCollectionGridLayoutSettings : NSObject

@property (nonatomic) unsigned long long sectionNumber;
@property (retain, nonatomic) NSString *sectionIdentifier;
@property (retain, nonatomic) NSString *sectionHeader;
@property (retain, nonatomic) NSAttributedString *sectionAttributedHeader;
@property (nonatomic) unsigned long long numberOfItems;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) long long horizontalAlignment;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) double rowSpacing;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) unsigned long long preferredLayoutStyle;
@property (nonatomic) double sectionTopPadding;
@property (nonatomic) unsigned long long titlePosition;

- (void).cxx_destruct;

@end
