@class NSUUID, LNDialog;

@interface LNContinueInAppRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, copy, nonatomic) LNDialog *dialog;
@property (readonly, nonatomic, getter=isThrowing) BOOL throwing;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)respondWithError:(id)a0;
- (void)respondWithSuccess;
- (id)initWithIdentifier:(id)a0 dialog:(id)a1 throwing:(BOOL)a2;

@end
