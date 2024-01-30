@class ATXHeuristicDevice;

@interface ATXContactsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void)contactsWithEmail:(id)a0 callback:(id /* block */)a1;
- (void)contactsWithIdentifiers:(id)a0 callback:(id /* block */)a1;
- (void)contactsWithName:(id)a0 callback:(id /* block */)a1;
- (void)contactsWithPhone:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_contactsWithPredicate:(id)a0 callback:(id /* block */)a1;

@end
