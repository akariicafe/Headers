@class NSArray, NSMutableArray, NSString;

@interface TitleDataSource : NSObject <ItemStylePickerDataSource>

@property (retain, nonatomic) NSArray *genericTitleInfoItems;
@property (retain, nonatomic) NSArray *themeTitleNames;
@property (retain, nonatomic) NSMutableArray *genericTitleNames;
@property (retain, nonatomic) NSMutableArray *motionTitleNames;
@property (retain, nonatomic) NSArray *allTitleNames;
@property (nonatomic) BOOL includeThemeTitles;
@property (nonatomic) BOOL includeMotionTitles;
@property (nonatomic) BOOL includeNone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDataSource;

- (long long)numberOfItems;
- (id)init;
- (void)dealloc;
- (id)itemNameAtIndexPath:(id)a0;
- (id)indexPathOfItemName:(id)a0;
- (id)titleTypesForTitleDefinition:(id)a0;
- (id)itemNames;
- (id)titleStylesIncludingTheme:(BOOL)a0 includingMotion:(BOOL)a1;
- (unsigned long long)numberOfTitles;
- (id)indexPathOfTitleName:(id)a0;
- (id)titleNameAtIndex:(unsigned long long)a0;
- (id)representativeTitleNameForTitleDefinition:(id)a0;
- (id)micaFileNameForTitleIdentifier:(id)a0 micaFileBaseName:(id)a1;

@end
