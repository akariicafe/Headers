@class NSNumber, NSString, CKContainerImplementation, NSOperationQueue, NSObject, NSURL;
@protocol OS_dispatch_queue;

@interface CKCodeServiceImplementation : NSObject

@property (readonly, weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSURL *serviceInstanceURL;
@property (readonly, copy, nonatomic) NSNumber *boxedDatabaseScope;

- (id)CKStatusReportArray;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)_initWithContainerImplementation:(id)a0 serviceName:(id)a1 boxedDatabaseScope:(id)a2 serviceInstanceURL:(id)a3;
- (void)addOperation:(id)a0 wrappingCodeService:(id)a1 convenienceConfiguration:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (void)_addPreparedOperation:(id)a0;

@end
