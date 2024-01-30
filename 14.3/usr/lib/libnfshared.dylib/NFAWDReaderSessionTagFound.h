@class NSString, AWDNFCReaderSessionTagFound;

@interface NFAWDReaderSessionTagFound : NSObject <NFAWDEventProtocol>

@property (retain, nonatomic) AWDNFCReaderSessionTagFound *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
