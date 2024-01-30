@class NSString, NSData;

@interface CHIPThreadOperationalDataset : NSObject

@property (readonly) struct OperationalDataset { unsigned char mData[254]; unsigned char mLength; } cppThreadOperationalDataset;
@property (readonly, copy, nonatomic) NSString *networkName;
@property (readonly, copy, nonatomic) NSData *extendedPANID;
@property (readonly, copy, nonatomic) NSData *masterKey;
@property (readonly, copy, nonatomic) NSData *PSKc;
@property (nonatomic) unsigned short channel;
@property (readonly, copy, nonatomic) NSData *panID;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)asData;
- (BOOL)_populateCppOperationalDataset;
- (BOOL)_checkDataLength:(id)a0 expectedLength:(unsigned long long)a1;
- (id)initWithNetworkName:(id)a0 extendedPANID:(id)a1 masterKey:(id)a2 PSKc:(id)a3 channel:(unsigned short)a4 panID:(id)a5;

@end
