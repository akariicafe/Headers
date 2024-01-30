@class NSArray;

@interface PXSettingsIndex : NSObject

@property (readonly, nonatomic) NSArray *entries;

+ (id)createIndexForSettings:(id)a0 resultHandler:(id /* block */)a1;
+ (id)_entriesForSettingsController:(id)a0 usingProgress:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)_initWithEntries:(id)a0;
- (id)searchForText:(id)a0 resultHandler:(id /* block */)a1;

@end
