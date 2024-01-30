@class NSError;

@interface INCExtensionError : NSObject

@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSError *underlyingError;

- (void).cxx_destruct;
- (id)initWithErrorCode:(long long)a0 underlyingError:(id)a1;

@end
