@class NSArray, NLXSchemaNLXClientEvent;

@interface SiriInstrumentationEventContainer : NSObject

@property (retain) NLXSchemaNLXClientEvent *mainEvent;
@property (retain) NSArray *tier1Events;

- (void).cxx_destruct;

@end
