@class NSData, NSError;

@interface IDSKTOptInResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSData *serverProvidedSMT;
@property (readonly, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0 serverProvidedSMT:(id)a1 error:(id)a2;

@end
