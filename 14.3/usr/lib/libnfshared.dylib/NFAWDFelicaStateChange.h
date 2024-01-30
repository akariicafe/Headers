@class NSString, AWDNFCFelicaStateChangeEvent;

@interface NFAWDFelicaStateChange : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCFelicaStateChangeEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
