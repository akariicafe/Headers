@class NSString, PPLocalContactStore, PPSQLDatabase, PPLocalNamedEntityStore;

@interface PPContactsImporter : NSObject <CNChangeHistoryEventVisitor> {
    PPSQLDatabase *_db;
    PPLocalContactStore *_contactStore;
    PPLocalNamedEntityStore *_namedEntityStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultInstance;

- (id)initWithDatabase:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)importContactsDataWithShouldContinueBlock:(id /* block */)a0;
- (void)visitAddContactEvent:(id)a0;
- (id)init;
- (void)visitDropEverythingEvent:(id)a0;
- (void).cxx_destruct;

@end
