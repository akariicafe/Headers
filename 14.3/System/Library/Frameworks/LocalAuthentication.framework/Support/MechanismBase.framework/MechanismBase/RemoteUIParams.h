@class NSData, MechanismUI, NSNumber;
@protocol LARemoteUIHost, LAUIMechanism;

@interface RemoteUIParams : NSObject

@property (readonly, nonatomic) MechanismUI<LAUIMechanism, LARemoteUIHost> *uiMechanism;
@property (readonly, nonatomic) NSData *auditTokenData;
@property (readonly, nonatomic) BOOL undimScreen;
@property (readonly, nonatomic) BOOL forSiri;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSNumber *userId;

- (void).cxx_destruct;
- (id)initWithUIMechanism:(id)a0 auditToken:(id)a1 undimScreen:(BOOL)a2 forSiri:(BOOL)a3 pid:(int)a4 userId:(id)a5;

@end
