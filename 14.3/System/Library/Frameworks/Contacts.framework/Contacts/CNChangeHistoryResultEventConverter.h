@class CNContactStore, NSArray, CNChangeHistoryEventFactory;

@interface CNChangeHistoryResultEventConverter : NSObject

@property (readonly) CNContactStore *contactStore;
@property (readonly, copy) NSArray *additionalContactKeyDescriptors;
@property (readonly) CNChangeHistoryEventFactory *factory;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 additionalContactKeyDescriptors:(id)a1;
- (id)eventsFromResult:(id)a0;

@end
