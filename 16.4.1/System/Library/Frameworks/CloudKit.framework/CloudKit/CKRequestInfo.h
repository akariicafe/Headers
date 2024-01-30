@class NSArray, NSString, NSDictionary;

@interface CKRequestInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *requestOperations;
@property (retain, nonatomic) NSString *operationClassName;
@property (readonly, copy, nonatomic) NSString *requestUUID;
@property (readonly, copy, nonatomic) NSDictionary *responseHTTPHeaders;
@property (readonly, copy, nonatomic) NSDictionary *w3cNavigationTiming;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestUUID:(id)a0 responseHTTPHeaders:(id)a1 w3cTiming:(id)a2;
- (void).cxx_destruct;

@end
