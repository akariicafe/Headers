@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {
    void *_imp;
}

@property (readonly, nonatomic) MIDINetworkHost *host;

+ (id)connectionWithHost:(id)a0;

- (void)dealloc;
- (id)init;

@end
