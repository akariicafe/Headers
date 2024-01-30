@class NSMutableDictionary, NSMutableIndexSet;

@interface TSPObjectContextDeterministicUUIDSet : NSObject {
    NSMutableIndexSet *_identifiers;
    NSMutableDictionary *_offsetsPerIdentifier;
}

- (void).cxx_destruct;
- (BOOL)addEntryForIdentifier:(long long)a0 offset:(unsigned long long)a1;

@end
