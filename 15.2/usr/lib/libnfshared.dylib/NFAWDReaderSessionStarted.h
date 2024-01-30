@class NSString, AWDNFCReaderSessionStarted;

@interface NFAWDReaderSessionStarted : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCReaderSessionStarted *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
