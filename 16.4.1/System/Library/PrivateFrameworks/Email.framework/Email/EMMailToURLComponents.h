@class NSArray, NSString;

@interface EMMailToURLComponents : NSObject

@property (readonly, nonatomic) NSArray *toRecipients;
@property (readonly, nonatomic) NSArray *ccRecipients;
@property (readonly, nonatomic) NSArray *bccRecipients;
@property (readonly, nonatomic) NSString *subject;
@property (readonly, nonatomic) NSString *body;
@property (readonly, nonatomic) NSString *from;

+ (id)componentsWithURL:(id)a0;

- (id)initWithURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_decomposeURL:(id)a0;

@end
