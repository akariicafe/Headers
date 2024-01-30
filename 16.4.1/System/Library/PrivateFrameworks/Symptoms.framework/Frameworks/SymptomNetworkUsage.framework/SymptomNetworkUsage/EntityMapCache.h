@class NSMutableDictionary;

@interface EntityMapCache : NSObject {
    NSMutableDictionary *_uuidMap;
}

@property double hitRetainTime;
@property double missRetainTime;
@property unsigned int capacityLimit;
@property unsigned int pruneSize;

- (id)entryForUUID:(id)a0;
- (id)stateDictionary;
- (void)setEntry:(id)a0 forUUID:(id)a1;
- (id)init;
- (void)pruneCache;
- (id)description;
- (void).cxx_destruct;

@end
