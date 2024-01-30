@class NSString, NSMutableArray, NSSet;

@interface DNDSContactMonitorChangeCollector : NSObject <CNChangeHistoryEventVisitor> {
    NSSet *_monitoredContactIdentifiers;
}

@property (readonly, copy, nonatomic) NSMutableArray *updatedContacts;
@property (readonly, copy, nonatomic) NSMutableArray *deletedContactIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitDropEverythingEvent:(id)a0;
- (void)visitDeleteContactEvent:(id)a0;
- (void)visitAddContactEvent:(id)a0;
- (void)visitUpdateContactEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithMonitoredContactIdentifiers:(id)a0;

@end
