@class NSArray, NSString, CNSaveRequest, NSMutableArray;

@interface CNSaveRequestContactIdentifierCollector : NSObject <CNChangeHistoryEventVisitorPrivate>

@property (readonly) CNSaveRequest *request;
@property (readonly) NSMutableArray *allIdentifiers;
@property (readonly) NSMutableArray *insertedIdentifiers;
@property (readonly) NSArray *allContactIdentifiers;
@property (readonly) NSArray *insertedContactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSaveRequest:(id)a0;
- (void)collectIdentifiers;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitLinkContactsEvent:(id)a0;
- (void)visitUnlinkContactEvent:(id)a0;
- (void)visitPreferredContactForNameEvent:(id)a0;
- (void)visitPreferredContactForImageEvent:(id)a0;
- (void)visitDifferentMeCardEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;

@end
