@class NSArray, NSString, NSDictionary;

@interface CKRequestInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *requestOperations;
@property (readonly, copy, nonatomic) NSString *requestUUID;
@property (readonly, copy, nonatomic) NSDictionary *responseHTTPHeaders;
@property (readonly, copy, nonatomic) NSDictionary *w3cNavigationTiming;

- (id)initWithRequestUUID:(id)a0 responseHTTPHeaders:(id)a1 w3cTiming:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
