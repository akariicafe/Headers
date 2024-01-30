@class NSArray, NSString, NSNumber;

@interface ICFolderCustomNoteSortType : NSObject

@property (class, retain, nonatomic) ICFolderCustomNoteSortType *querySortType;
@property (class, readonly, nonatomic) NSArray *sortTypeOrderValues;
@property (class, readonly, nonatomic) long long customOrderForCurrentNoteListSortType;
@property (class, readonly, nonatomic) NSString *currentDefaultMenuItemString;

@property (nonatomic) long long order;
@property (nonatomic) long long direction;
@property (readonly, nonatomic) NSNumber *valueRepresentation;
@property (readonly, nonatomic) BOOL isDefault;
@property (readonly, nonatomic) long long resolvedCustomSortTypeOrder;
@property (readonly, nonatomic) NSString *summaryViewTitleDescription;

+ (long long)customOrderForGlobalSortType:(long long)a0;
+ (id)folderNoteSortTypeFromValue:(id)a0;
+ (BOOL)isTagAnOrder:(long long)a0;
+ (unsigned long long)tagForSortTypeOrder:(long long)a0;
+ (id)noteSortTypeDefaultAscending;
+ (id)stringNameForDirection:(long long)a0 order:(long long)a1;
+ (BOOL)isTagADirection:(long long)a0;
+ (unsigned long long)tagForSortTypeDirection:(long long)a0;
+ (long long)sortTypeOrderForTag:(unsigned long long)a0;
+ (id)actionItemTitleForOrder:(long long)a0;
+ (long long)sortTypeDirectionForTag:(unsigned long long)a0;
+ (id)folderNoteSortTypeWithOrder:(long long)a0 direction:(long long)a1;
+ (id)segmentItemTitleForOrder:(long long)a0;

- (BOOL)isAscending;
- (id)debugStringNameForOrder:(long long)a0;
- (id)folderNoteSortTypeByChangingDirection;
- (id)folderNoteSortTypeByChangingOrder:(long long)a0;
- (id)currentActionItemTitle;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
