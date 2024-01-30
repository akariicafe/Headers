@class NSString, NSIndexPath;

@interface _PXSettingsIndexEntry : NSObject

@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) NSString *sectionTitle;
@property (readonly, nonatomic) NSString *rowTitle;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (weak, nonatomic) _PXSettingsIndexEntry *parentEntry;

+ (id)_cellForRowAtIndexPath:(id)a0 inTableView:(id)a1;
+ (id)_titleForRowAtIndexPath:(id)a0 inTableView:(id)a1;

- (void).cxx_destruct;
- (void)_revealInTopOfSettingsController:(id)a0 drillIn:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (void)_revealInSettingsController:(id)a0 drillIn:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithRowAtIndexPath:(id)a0 inTableView:(id)a1;
- (BOOL)matchesSearchString:(id)a0;
- (void)revealInSettingsController:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
