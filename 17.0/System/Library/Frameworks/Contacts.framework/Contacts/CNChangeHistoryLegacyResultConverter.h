@class CNContactStore, NSArray, CNChangeHistoryEventFactory;

@interface CNChangeHistoryLegacyResultConverter : NSObject

@property (readonly) CNContactStore *contactStore;
@property (readonly, copy) NSArray *additionalContactKeyDescriptors;
@property (readonly) CNChangeHistoryEventFactory *factory;

- (void).cxx_destruct;
- (id)eventsFromResult:(id)a0;
- (id)initWithContactStore:(id)a0 additionalContactKeyDescriptors:(id)a1;

@end
