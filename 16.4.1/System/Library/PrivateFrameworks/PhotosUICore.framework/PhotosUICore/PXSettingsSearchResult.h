@class NSString, _PXSettingsIndexEntry;

@interface PXSettingsSearchResult : NSObject

@property (readonly, nonatomic) _PXSettingsIndexEntry *entry;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;

- (id)init;
- (void).cxx_destruct;
- (id)_initWithEntry:(id)a0;
- (void)revealInSettingsController:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
