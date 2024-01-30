@class NSData, NSMutableArray, NSString;

@interface CLSContactHistoryCollector : NSObject <CNChangeHistoryEventVisitor>

@property BOOL didDropEverything;
@property (retain, nonatomic) NSMutableArray *insertedContactIdentifiers;
@property (retain, nonatomic) NSMutableArray *updatedContactIdentifiers;
@property (retain, nonatomic) NSMutableArray *deletedContactIdentifiers;
@property (retain, nonatomic) NSData *contactHistoryToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitDropEverythingEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;

@end
