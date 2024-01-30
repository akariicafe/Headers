@class NSString, NSURL;

@interface SecureChannelAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSURL *url;

- (void).cxx_destruct;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithURL:(id)a0 title:(id)a1 message:(id)a2;

@end
