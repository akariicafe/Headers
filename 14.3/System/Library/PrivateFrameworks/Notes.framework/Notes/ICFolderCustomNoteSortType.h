@class NSArray, NSNumber, NSString;

@interface ICFolderCustomNoteSortType : NSObject

@property (class, readonly, nonatomic) NSArray *sortTypeOrderValues;

@property (nonatomic) unsigned long long order;
@property (nonatomic) unsigned long long direction;
@property (readonly, nonatomic) NSNumber *valueRepresentation;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) NSString *summaryViewTitleDescription;

+ (id)folderNoteSortTypeWithOrder:(unsigned long long)a0 direction:(unsigned long long)a1;
+ (unsigned long long)customOrderForGlobalSortType:(long long)a0;
+ (id)stringNameForDirection:(unsigned long long)a0 order:(unsigned long long)a1;
+ (id)noteSortTypeDefaultAscending;
+ (id)currentDefaultMenuItemString;
+ (id)folderNoteSortTypeFromValue:(id)a0;
+ (unsigned long long)sortTypeOrderForTag:(unsigned long long)a0;
+ (unsigned long long)sortTypeDirectionForTag:(unsigned long long)a0;
+ (unsigned long long)tagForSortTypeOrder:(unsigned long long)a0;
+ (unsigned long long)tagForSortTypeDirection:(unsigned long long)a0;
+ (BOOL)isTagAnOrder:(long long)a0;
+ (BOOL)isTagADirection:(long long)a0;
+ (id)actionItemTitleForOrder:(unsigned long long)a0;
+ (id)rd_actionItemTitleForOrder:(unsigned long long)a0;
+ (id)segmentItemTitleForOrder:(unsigned long long)a0;

- (id)debugStringNameForOrder:(unsigned long long)a0;
- (id)folderNoteSortTypeByChangingOrder:(unsigned long long)a0;
- (id)folderNoteSortTypeByChangingDirection;
- (id)currentActionItemTitle;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isAscending;

@end
