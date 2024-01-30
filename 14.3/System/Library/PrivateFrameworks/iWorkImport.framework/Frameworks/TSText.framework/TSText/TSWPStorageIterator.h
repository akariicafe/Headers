@class NSCharacterSet, TSWPStorage, NSMutableArray;

@interface TSWPStorageIterator : NSObject

@property (retain, nonatomic) TSWPStorage *storage;
@property (nonatomic) unsigned long long charIndex;
@property (nonatomic) unsigned long long startCharIndex;
@property (retain, nonatomic) NSMutableArray *rangeProviders;
@property (retain, nonatomic) NSMutableArray *locationProviders;
@property (retain, nonatomic) NSMutableArray *pendingEvents;
@property (nonatomic) BOOL sendEventsForNilObjects;
@property (nonatomic) BOOL lastEventWasMarker;
@property (retain, nonatomic) NSCharacterSet *markers;

- (id)initWithStorage:(id)a0;
- (void).cxx_destruct;
- (id)nextEvent;
- (id)description;
- (void)addRangeProvider:(id)a0;
- (void)p_emitPendingCharactersAndEvent:(id)a0;
- (void)p_emitEventWithType:(int)a0 provider:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 object:(id)a3;
- (void)p_emitEventForMarkerCharacter:(unsigned short)a0 atIndex:(unsigned long long)a1;
- (void)p_forceRangeEndForProvider:(id)a0 providerIndex:(unsigned long long)a1 atCharIndex:(unsigned long long)a2;
- (void)addAttributeRangeProvider:(unsigned long long)a0;
- (void)addLocationProvider:(id)a0;

@end
