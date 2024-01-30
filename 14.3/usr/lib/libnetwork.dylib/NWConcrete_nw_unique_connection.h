@class NSString, NWConcrete_nw_connection, NSObject;
@protocol OS_nw_endpoint;

@interface NWConcrete_nw_unique_connection : NSObject <OS_nw_unique_connection> {
    NSObject<OS_nw_endpoint> *endpoint;
    char service[436];
    unsigned long long receivedSequenceNumber;
    unsigned long long uniqueID;
    unsigned char uuid[16];
    NWConcrete_nw_connection *connection;
    int dupedSocketFD;
    unsigned char isIncoming : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
