@class NSError;

@interface TKTokenAuthOperation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSError *authenticationError;

- (BOOL)finishWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)importOperation:(id)a0;
- (Class)baseClassForUI;
- (void)encodeWithCoder:(id)a0;

@end
