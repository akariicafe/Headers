@class NSMutableArray;

@interface SETransceiveHelper : NSObject

@property (nonatomic) struct shared_ptr<SEUpdater::P73BaseSEController> { struct P73BaseSEController *__ptr_; struct __shared_weak_count *__cntrl_; } fSeController;
@property (retain, nonatomic) NSMutableArray *capduRecord;
@property (retain, nonatomic) NSMutableArray *rapduRecord;

- (id).cxx_construct;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (long long)copyDeviceType:(id *)a0;
- (id)transceiveAndRecordCapdu:(void *)a0 rapdu:(void *)a1;
- (id)copyA9Parameters:(id *)a0;
- (id)copyCasdCert:(id *)a0;
- (id)copySESignature:(id)a0 hsmChallengeSE:(id)a1 ecid:(id)a2 outError:(id *)a3;
- (id)copySeid:(id *)a0;
- (id)crsGetSharingRequestWithError:(id *)a0;
- (BOOL)crsSetSharingResult:(id)a0 signature:(id)a1 error:(id *)a2;
- (BOOL)getSEPK:(id *)a0 andSEID:(id *)a1 deleteExisting:(BOOL)a2 error:(id *)a3;
- (id)initWithSEController:(struct shared_ptr<SEUpdater::P73BaseSEController> { struct P73BaseSEController *x0; struct __shared_weak_count *x1; })a0;
- (void)recordApdu:(struct Apdu { void /* function */ **x0; struct shared_ptr<std::vector<unsigned char>> { void *x0; struct __shared_weak_count *x1; } x1; })a0 toRecord:(id)a1;
- (id)selectWithAID:(id)a0;
- (BOOL)setAuthRandom:(id)a0 mac:(id)a1 error:(id *)a2;

@end
