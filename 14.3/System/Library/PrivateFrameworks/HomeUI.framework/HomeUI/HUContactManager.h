@class NSDictionary, CNContactStore, CNMonogrammer;

@interface HUContactManager : NSObject

@property (copy, nonatomic) NSDictionary *cachedContactByEmails;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) CNMonogrammer *monogrammer;
@property (nonatomic) double monogramDiameter;

+ (id)sharedManager;

- (void)contactStoreDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)contactForEmailAddress:(id)a0 keysToFetch:(id)a1;
- (id)userDataFromEmail:(id)a0 monogramDiameter:(double)a1;

@end
