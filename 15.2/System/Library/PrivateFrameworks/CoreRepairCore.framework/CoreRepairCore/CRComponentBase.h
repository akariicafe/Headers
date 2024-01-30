@class NSString;

@interface CRComponentBase : NSObject

@property (retain, nonatomic) NSString *identiferBase64;

+ (id)sharedSingleton;

- (void).cxx_destruct;
- (id)init;
- (void)challengeComponentWith:(id)a0 withReply:(id /* block */)a1;
- (unsigned int)CRCreateECDSADerData:(id)a0 responseDer:(id *)a1;
- (id)sha256:(id)a0;

@end
