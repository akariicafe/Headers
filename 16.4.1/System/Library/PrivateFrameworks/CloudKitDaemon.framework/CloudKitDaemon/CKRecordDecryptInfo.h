@class NSError, CKRecord, NSObject;
@protocol OS_dispatch_group;

@interface CKRecordDecryptInfo : NSObject

@property (readonly, nonatomic) CKRecord *record;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *decryptGroup;
@property (copy, nonatomic) id /* block */ callback;
@property unsigned long long numUnwrapAttempts;

- (id)initWithRecord:(id)a0 callbackQueue:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_setupDecryptCallbackForQueue:(id)a0;

@end
