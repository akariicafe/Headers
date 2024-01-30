@class NSData, MechanismUI, NSNumber;
@protocol LARemoteUIHost, LAUIMechanism;

@interface RemoteUIParams : NSObject

@property (retain, nonatomic) MechanismUI<LAUIMechanism, LARemoteUIHost> *uiMechanism;
@property (retain, nonatomic) NSData *auditTokenData;
@property (nonatomic) BOOL undimScreen;
@property (nonatomic) BOOL forSiri;
@property (nonatomic) int pid;
@property (retain, nonatomic) NSNumber *userId;

- (void).cxx_destruct;

@end
