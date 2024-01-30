@class NSString, AWDNFCReaderModeExceptionEvent;

@interface NFAWDReaderModeExceptionEvent : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int errorCode;
@property (retain, nonatomic) AWDNFCReaderModeExceptionEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
