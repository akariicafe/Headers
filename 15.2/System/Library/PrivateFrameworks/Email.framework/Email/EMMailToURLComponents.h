@class NSArray, NSString;

@interface EMMailToURLComponents : NSObject

@property (readonly, nonatomic) NSArray *toRecipients;
@property (readonly, nonatomic) NSArray *ccRecipients;
@property (readonly, nonatomic) NSArray *bccRecipients;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *body;

+ (id)componentsWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_decomposeURL:(id)a0;

@end
