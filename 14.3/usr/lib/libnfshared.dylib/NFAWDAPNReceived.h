@class NSString, AWDNFCTSMAPNReceivedEvent;

@interface NFAWDAPNReceived : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCTSMAPNReceivedEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
