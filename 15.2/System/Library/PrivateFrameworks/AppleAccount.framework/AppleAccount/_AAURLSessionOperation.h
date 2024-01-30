@class NSData, NSMutableData;

@interface _AAURLSessionOperation : NSObject {
    NSMutableData *_mutableData;
}

@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, copy, nonatomic) NSData *data;

+ (id)operationWithCompletion:(id /* block */)a0;

- (void)appendData:(id)a0;
- (void)invokeCompletionWithResponse:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithCompletion:(id /* block */)a0;
- (id)init;

@end
