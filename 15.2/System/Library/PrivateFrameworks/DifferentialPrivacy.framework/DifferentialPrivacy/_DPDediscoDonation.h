@class NSString, NSData, NSDictionary;

@interface _DPDediscoDonation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSData *share1;
@property (copy, nonatomic) NSData *share2;
@property (nonatomic) long long dimension;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSString *serverAlgorithm;
@property (copy, nonatomic) NSDictionary *algorithmParameters;

+ (id)requiredClasses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKey:(id)a0 share1:(id)a1 share2:(id)a2 dimension:(long long)a3 metadata:(id)a4 serverAlgorithm:(id)a5 algorithmParameters:(id)a6;

@end
