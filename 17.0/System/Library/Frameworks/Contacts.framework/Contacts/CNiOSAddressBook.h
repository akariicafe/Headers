@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CNiOSAddressBook : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSMutableSet *addressBookPool;
@property (readonly, copy, nonatomic) id /* block */ addressBookProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (readonly, nonatomic) BOOL addressBookIsShared;

+ (void *)newAddressBookWithURL:(id)a0;
+ (void)initialize;
+ (void *)newInMemoryAddressBook;
+ (void *)newAddressBookWithDelegateInfo:(id)a0;

- (id)init;
- (void)flushPool;
- (id)resultWithInvalidatedAddressBook:(id /* block */)a0;
- (void *)preparedAddressBook:(void *)a0;
- (id)initWithContactsEnvironment:(id)a0;
- (void *)popAddressBook;
- (id)performAsynchronousWorkWithInvalidatedAddressBook:(id /* block */)a0;
- (void).cxx_destruct;
- (id)performSynchronousWorkWithInvalidatedAddressBook:(id /* block */)a0;
- (void)pushAddressBook:(void *)a0;
- (id)initWithAddressBookProvider:(id /* block */)a0;

@end
