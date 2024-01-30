@class NSArray, CNContactStore, NSString;

@interface CNUIDraggingContacts : NSObject <NSItemProviderWriting, NSItemProviderReading>

@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;

@property (retain, nonatomic) NSArray *draggingContacts;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (BOOL)canAcceptDropForDropSession:(id)a0;
+ (id)contactsFromDraggingContacts:(id)a0 withKeys:(id)a1;
+ (id)contactsWithIdentifiers:(id)a0 store:(id)a1 keysToFetch:(id)a2 unifyResults:(BOOL)a3 error:(id *)a4;
+ (id)dragItemForContact:(id)a0 withContactStore:(id)a1;
+ (id)draggingContactsForContacts:(id)a0 contactStore:(id)a1;
+ (id)draggingContactsWithItemProviderData:(id)a0 typeIdentifier:(id)a1 contactStore:(id)a2 error:(id *)a3;
+ (id)imageForDragging;
+ (id)itemProviderForContact:(id)a0 withContactStore:(id)a1;
+ (void)provideContactsForDropSession:(id)a0 withKeys:(id)a1 completionBlock:(id /* block */)a2;
+ (void)provideVCardURLForDropSession:(id)a0 completionBlock:(id /* block */)a1;

- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDraggingContacts:(id)a0 contactStore:(id)a1;

@end
