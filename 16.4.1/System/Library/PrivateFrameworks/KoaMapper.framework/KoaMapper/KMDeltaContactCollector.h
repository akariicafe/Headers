@class NSString;

@interface KMDeltaContactCollector : NSObject <CNChangeHistoryEventVisitor>

@property (retain, nonatomic) NSString *contactIdentifier;
@property (nonatomic) unsigned char deltaType;
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
- (void)reset;

@end
