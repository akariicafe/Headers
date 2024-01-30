@class NSArray;

@interface HMCharacteristicBatchRequest : NSObject

@property (retain, nonatomic) NSArray *requests;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ completionHandler;

+ (BOOL)validateRequestTypes:(id)a0 requestClass:(Class)a1;
+ (id)characteristicBatchRequestWithReadRequests:(id)a0;
+ (id)characteristicBatchRequestWithWriteRequests:(id)a0;

- (void).cxx_destruct;
- (id)initWithRequests:(id)a0 requestClass:(Class)a1;

@end
