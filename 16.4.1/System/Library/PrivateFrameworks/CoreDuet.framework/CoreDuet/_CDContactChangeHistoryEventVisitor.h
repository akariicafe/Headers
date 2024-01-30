@class NSArray, NSString, NSData, NSMutableArray, CNFetchResult;

@interface _CDContactChangeHistoryEventVisitor : NSObject <CNChangeHistoryEventVisitor> {
    CNFetchResult *_changeEnumerator;
    NSMutableArray *_deletedContactIdentifiers;
    NSMutableArray *_addedContactIdentifiers;
}

@property (readonly, nonatomic) NSArray *deletedContactIdentifiers;
@property (readonly, nonatomic) NSArray *addedContactIdentifiers;
@property (readonly, nonatomic) NSData *currentHistoryToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithChangeEnumerator:(id)a0;
- (void)visitChanges;

@end
