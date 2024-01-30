@class NSArray;

@interface VUIMenuDataSource : NSObject

@property (retain, nonatomic) NSArray *mainMenuItems;
@property (retain, nonatomic) NSArray *genreMenuItems;
@property (nonatomic) BOOL hasGenresDataForCheckHasItemsOption;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMainMenuItems:(id)a0 genreMenuItems:(id)a1;

@end
