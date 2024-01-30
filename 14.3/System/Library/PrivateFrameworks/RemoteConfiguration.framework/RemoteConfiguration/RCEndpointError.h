@class NSString;

@interface RCEndpointError : NSObject

@property (readonly, copy, nonatomic) NSString *errorCode;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *stacktrace;

+ (id)endpointErrorWithDictionary:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithErrorCode:(id)a0 message:(id)a1 stacktrace:(id)a2;

@end
