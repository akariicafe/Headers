@class NSData, NSString, AWDNFCSERestrictedModeEnteredEvent;

@interface NFAWDSERestrictedModeEntered : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int hardwareType;
@property (nonatomic) BOOL contactlessMode;
@property (retain, nonatomic) NSData *restrictedModeID;
@property (retain, nonatomic) NSString *platformIdentifier;
@property (retain, nonatomic) NSData *attackLog;
@property (retain, nonatomic) AWDNFCSERestrictedModeEnteredEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
