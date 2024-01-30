@class CNContactStore, NSArray, CNChangeHistoryEventFactory;

@interface CNChangeHistoryResultEventConverter : NSObject

@property (readonly) CNContactStore *contactStore;
@property (readonly, copy) NSArray *additionalContactKeyDescriptors;
@property (readonly) CNChangeHistoryEventFactory *factory;

- (id)eventsFromResult:(id)a0;
- (id)initWithContactStore:(id)a0 additionalContactKeyDescriptors:(id)a1;
- (void).cxx_destruct;

@end
