@class NSString;

@interface BloodhoundPacketDumper : NSObject {
    struct pcap { } *_pcap;
    struct pcap_dumper { } *_dumper;
    BOOL _externalDumper;
    NSString *_fileName;
}

- (id)initWithFileName:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDumper:(struct pcap_dumper { } *)a0;
- (void)dumpPacket:(id)a0 type:(unsigned int)a1 metadata:(void *)a2 metadataLength:(unsigned long long)a3;

@end
