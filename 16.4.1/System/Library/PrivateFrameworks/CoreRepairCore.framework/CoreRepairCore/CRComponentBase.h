@class NSString;

@interface CRComponentBase : NSObject

@property (retain, nonatomic) NSString *identiferBase64;

+ (id)sharedSingleton;

- (id)init;
- (void).cxx_destruct;
- (id)sha256:(id)a0;
- (unsigned int)CRCreateECDSADerData:(id)a0 responseDer:(id *)a1;
- (void)challengeComponentWith:(id)a0 withReply:(id /* block */)a1;

@end
