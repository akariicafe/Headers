@class NSString, NSArray;

@interface _CSQueryTokenRewrite : NSObject

@property (copy, nonatomic) NSString *originalToken;
@property (readonly, copy, nonatomic) NSArray *variations;

- (void).cxx_destruct;
- (id)initWithOriginalToken:(id)a0 variations:(id)a1;

@end
