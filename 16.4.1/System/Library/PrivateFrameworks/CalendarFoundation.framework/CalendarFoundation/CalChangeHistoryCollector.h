@class NSString, NSMutableArray;

@interface CalChangeHistoryCollector : NSObject <CNChangeHistoryEventVisitor>

@property BOOL didReset;
@property BOOL hasChanges;
@property (retain) NSMutableArray *insertedContacts;
@property (retain) NSMutableArray *updatedContacts;
@property (retain) NSMutableArray *deletedContactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitUpdateContactEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (id)init;
- (void)visitDropEverythingEvent:(id)a0;
- (void).cxx_destruct;

@end
