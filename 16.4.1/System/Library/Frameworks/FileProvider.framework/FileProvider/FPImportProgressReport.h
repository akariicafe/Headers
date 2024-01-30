@class NSArray, NSDictionary;

@interface FPImportProgressReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long numberOfItemsInError;
@property (readonly, copy, nonatomic) NSArray *errorDetails;
@property (readonly, copy, nonatomic) NSDictionary *json;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 numberOfItemsInError:(long long)a1 errorDetails:(id)a2;

@end
