@class NSString, NSObject;
@protocol OS_nw_protocol_definition;

@interface NWConcrete_nw_protocol_establishment_report : NSObject <OS_nw_protocol_establishment_report> {
    unsigned long long handshake_milliseconds;
    unsigned long long handshake_rtt_milliseconds;
    NSObject<OS_nw_protocol_definition> *protocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
