@class NSMutableDictionary;

@interface ANRapportEventStreamHandler : NSObject

@property (readonly, nonatomic) NSMutableDictionary *rapportActivationHandlers;

- (id)init;
- (void)addRapportServiceType:(id)a0 activationBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addAnnounceRapportServiceType;
- (void)setEventStreamHandler;

@end
