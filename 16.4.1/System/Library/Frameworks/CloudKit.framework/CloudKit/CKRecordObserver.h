@class CKContainerSetupInfo, NSString;
@protocol CKRecordObservable;

@interface CKRecordObserver : NSObject <NSCopying>

@property (readonly, copy, nonatomic) CKContainerSetupInfo *containerInfo;
@property (readonly, nonatomic) id<CKRecordObservable> provider;
@property (readonly, copy, nonatomic) NSString *recordType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0 recordType:(id)a1;
- (id)initWithContainerInfo:(id)a0 recordType:(id)a1 provider:(id)a2;
- (void)registerWithBlock:(id /* block */)a0;

@end
