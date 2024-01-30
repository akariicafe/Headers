@class NSError;

@interface TKTokenAuthOperation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSError *authenticationError;

- (BOOL)finishWithError:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (Class)baseClassForUI;
- (void)importOperation:(id)a0;

@end
