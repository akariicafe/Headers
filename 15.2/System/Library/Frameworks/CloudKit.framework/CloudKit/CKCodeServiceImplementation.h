@class NSOperationQueue, NSString, CKContainerImplementation, NSURL, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface CKCodeServiceImplementation : NSObject

@property (weak, nonatomic) CKContainerImplementation *containerImplementation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSURL *serviceInstanceURL;
@property (readonly, copy, nonatomic) NSNumber *boxedDatabaseScope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;

- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)CKStatusReportArray;
- (id)description;
- (void).cxx_destruct;
- (void)addOperation:(id)a0 wrappingCodeService:(id)a1 convenienceConfiguration:(id)a2;
- (id)_initWithContainerImplementation:(id)a0 serviceName:(id)a1 boxedDatabaseScope:(id)a2 serviceInstanceURL:(id)a3;

@end
