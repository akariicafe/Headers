@class NSString;
@protocol CALNNotificationManager;

@interface CALNFilteredNotificationManager : NSObject <CALNNotificationManager>

@property (readonly, nonatomic) id<CALNNotificationManager> wrappedNotificationManager;
@property (readonly, nonatomic) id /* block */ predicate;
@property (readonly, nonatomic) BOOL isProtectedDataAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addRecord:(id)a0;
- (void).cxx_destruct;
- (void)removeRecordWithSourceIdentifier:(id)a0 sourceClientIdentifier:(id)a1;
- (void)updateRecord:(id)a0;
- (id)fetchRecordsWithSourceIdentifier:(id)a0;
- (id)initWithWrappedNotificationManager:(id)a0 predicate:(id /* block */)a1;

@end
