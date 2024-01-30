@class NSData, NSUUID, NSError;

@interface ISGenerationResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *data;
@property (readonly) NSUUID *uuid;
@property (readonly) NSData *validationToken;
@property (readonly) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithError:(id)a0;
- (id)initWithData:(id)a0 uuid:(id)a1 validationToken:(id)a2;
- (void).cxx_destruct;

@end
