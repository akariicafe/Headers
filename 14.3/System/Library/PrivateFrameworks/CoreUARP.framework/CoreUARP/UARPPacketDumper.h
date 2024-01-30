@interface UARPPacketDumper : NSObject {
    struct pcap { } *_pcap;
    struct pcap_dumper { } *_dumper;
    unsigned int _bloodhoundPacketType;
}

- (void)dealloc;
- (id)initWithFileName:(id)a0;
- (void)dump:(id)a0 accessoryID:(id)a1 uarpStatus:(unsigned int)a2 direction:(unsigned long long)a3;

@end
