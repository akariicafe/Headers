@class NSArray;

@interface CNHandleExpander : NSObject

@property (retain, nonatomic) NSArray *incomingAddresses;
@property (retain, nonatomic) NSArray *expandedAddresses;

+ (id)contactStoreForFetchingContacts;

- (id)expandedHandles;
- (id)initWithHandles:(id)a0;
- (void)expandHandles;
- (void).cxx_destruct;

@end
