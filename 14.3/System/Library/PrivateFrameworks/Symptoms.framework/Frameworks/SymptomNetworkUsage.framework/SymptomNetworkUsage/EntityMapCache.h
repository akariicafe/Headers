@class NSMutableDictionary;

@interface EntityMapCache : NSObject {
    NSMutableDictionary *_uuidMap;
}

@property double hitRetainTime;
@property double missRetainTime;
@property unsigned int capacityLimit;
@property unsigned int pruneSize;

- (id)init;
- (void).cxx_destruct;
- (id)stateDictionary;
- (id)entryForUUID:(id)a0;
- (id)description;
- (void)pruneCache;
- (void)setEntry:(id)a0 forUUID:(id)a1;

@end
