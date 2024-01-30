@class NSError, NSDictionary;

@interface CATMutableTaskProgress : CATTaskProgress

@property (nonatomic) unsigned long long phase;
@property (retain, nonatomic) id resultObject;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (nonatomic) BOOL isCancelable;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) long long completedUnitCount;
@property (nonatomic) long long totalUnitCount;

- (id)initWithOperationUUID:(id)a0;
- (void)setProgress:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setResultObject:(id)a0;
- (id)initWithOperationUUID:(id)a0 requestClass:(Class)a1;

@end
