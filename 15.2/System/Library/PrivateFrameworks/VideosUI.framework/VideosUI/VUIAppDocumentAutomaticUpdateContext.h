@class IKUpdateServiceRequest, NSArray, NSString, NSMutableOrderedSet;

@interface VUIAppDocumentAutomaticUpdateContext : NSObject <VUIAppDocumentUpdateContext>

@property (retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest;
@property (copy, nonatomic) NSArray *receivedEvents;
@property (retain, nonatomic) NSMutableOrderedSet *remainingViewElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)_documentUpdateRequestForViewElement:(id)a0 appContext:(id)a1 documentRef:(id)a2;
- (void)updateRequestCompletedWithViewElements:(id)a0 documentRef:(id)a1;
- (void)updateCurrentUpdateRequestWithAppContext:(id)a0 documentRef:(id)a1;
- (id)initWithEvents:(id)a0 viewElements:(id)a1;

@end
