@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CNiOSAddressBook : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSMutableSet *addressBookPool;
@property (readonly, copy, nonatomic) id /* block */ addressBookProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (readonly, nonatomic) BOOL addressBookIsShared;

+ (void)initialize;
+ (void *)newInMemoryAddressBook;
+ (void *)newAddressBookWithDelegateInfo:(id)a0;
+ (void *)newAddressBookWithURL:(id)a0;

- (void)flushPool;
- (void)pushAddressBook:(void *)a0;
- (void)performAsynchronousWorkWithInvalidatedAddressBook:(id /* block */)a0;
- (void *)preparedAddressBook:(void *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithContactsEnvironment:(id)a0;
- (id)initWithAddressBookProvider:(id /* block */)a0;
- (void *)popAddressBook;
- (void)performSynchronousWorkWithInvalidatedAddressBook:(id /* block */)a0;
- (id)resultWithInvalidatedAddressBook:(id /* block */)a0;

@end
