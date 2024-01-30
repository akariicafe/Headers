@class NSString, INObjectCollection, NSObject;
@protocol OS_dispatch_queue;

@interface WFCalendarPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (retain, nonatomic) id defaultSerializedCalendarRepresentation;
@property (retain, nonatomic) INObjectCollection *calendarsCollection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) BOOL allowsAllCalendars;
@property (readonly, nonatomic) BOOL hidesReadOnlyCalendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (void)clearPossibleStates;
- (id)enumeration:(id)a0 accessoryColorForPossibleState:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;

@end
