@class AWDNFCReaderSessionEnded, NSString;

@interface NFAWDReaderSessionEnded : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCReaderSessionEnded *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
