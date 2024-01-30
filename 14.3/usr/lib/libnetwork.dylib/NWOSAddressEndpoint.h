@interface NWOSAddressEndpoint : NWConcrete_nw_endpoint {
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } address;
    struct ether_addr { unsigned char octet[6]; } ethernet_address;
    char *hostname;
    int original_fd;
    unsigned short priority;
    unsigned char calculated_hostname : 1;
}

- (id)copyDictionary;
- (const char *)hostname;
- (unsigned short)port;
- (void)setPriority:(unsigned short)a0;
- (unsigned long long)getHash;
- (void)dealloc;
- (unsigned short)priority;
- (unsigned int)type;
- (BOOL)isEqualToEndpoint:(id)a0 matchInterface:(BOOL)a1 matchParent:(BOOL)a2;
- (char *)createDescription:(BOOL)a0;
- (id)copyEndpoint;

@end
