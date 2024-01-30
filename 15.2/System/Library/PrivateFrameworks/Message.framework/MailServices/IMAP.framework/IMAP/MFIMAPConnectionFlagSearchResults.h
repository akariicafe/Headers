@class NSMutableDictionary;

@interface MFIMAPConnectionFlagSearchResults : NSObject {
    NSMutableDictionary *_uidsWithFlagMaskSet;
    NSMutableDictionary *_uidsWithoutFlagMaskSet;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)cacheStateForUIDs:(id)a0 mask:(unsigned long long)a1 existenceSetsFlag:(BOOL)a2;
- (id)copyResponseForUID:(unsigned long long)a0;
- (id)_indexSetFromUIDs:(id)a0;
- (unsigned long long)_flagsForUID:(unsigned long long)a0;

@end
