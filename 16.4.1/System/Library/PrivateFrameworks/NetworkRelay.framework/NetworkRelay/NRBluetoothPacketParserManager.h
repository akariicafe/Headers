@class NSMutableDictionary;

@interface NRBluetoothPacketParserManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_parserDictionary;
}

- (id)init;
- (void).cxx_destruct;

@end
