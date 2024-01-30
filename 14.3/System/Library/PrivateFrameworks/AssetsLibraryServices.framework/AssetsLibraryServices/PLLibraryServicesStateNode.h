@class NSOperationQueue;

@interface PLLibraryServicesStateNode : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) unsigned int qos;

- (void)terminate;
- (void)run;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLibraryServicesState:(long long)a0 qualityOfService:(unsigned int)a1;

@end
