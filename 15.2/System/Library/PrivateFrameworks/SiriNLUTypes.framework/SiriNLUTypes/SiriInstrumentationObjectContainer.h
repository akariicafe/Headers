@class NSMutableArray, SISchemaInstrumentationMessage;

@interface SiriInstrumentationObjectContainer : NSObject

@property (retain) SISchemaInstrumentationMessage *mainItem;
@property (retain) NSMutableArray *tier1Events;

- (void).cxx_destruct;
- (void)addTier1Event:(id)a0;

@end
