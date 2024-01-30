@class NSObject, NSString, NSOperationQueue, NSURL, NSNumber, CKContainer;
@protocol OS_dispatch_queue;

@interface CKCodeService : NSObject

@property (weak, nonatomic) CKContainer *container;
@property (copy, nonatomic) NSNumber *boxedDatabaseScope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSURL *serviceInstanceURL;

- (void)addOperation:(id)a0;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)a0 private:(BOOL)a1 shouldExpand:(BOOL)a2;
- (id)init;
- (id)CKStatusReportArray;
- (void).cxx_destruct;
- (id)description;
- (id)_initWithContainer:(id)a0 serviceName:(id)a1 boxedDatabaseScope:(id)a2 serviceInstanceURL:(id)a3;

@end
