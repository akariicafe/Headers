@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider

@property (readonly, nonatomic) BOOL connectedToCar;
@property (readonly, nonatomic) BOOL connectedToSpeaker;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithConnectionToCar:(BOOL)a0 connectionToSpeaker:(BOOL)a1;

@end
