@class NSString, _PXSettingsIndexEntry;

@interface PXSettingsSearchResult : NSObject

@property (readonly, nonatomic) _PXSettingsIndexEntry *entry;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;

- (void).cxx_destruct;
- (id)init;
- (void)revealInSettingsController:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_initWithEntry:(id)a0;

@end
