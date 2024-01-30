@class NSString;

@interface NFAWDCRSActivationTimerExpired : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)a0;

@end
