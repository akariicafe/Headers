@class NSObject;
@protocol CKVAdminService;

@interface CKVocabularyAdminEventSimulator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    double _timeout;
    BOOL _simulationFinished;
}

- (long long)finish;
- (void)dealloc;
- (void)handleTask:(unsigned short)a0 reason:(unsigned short)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithAdminService:(id)a0;
- (id)initWithAdminService:(id)a0 timeout:(double)a1;

@end
