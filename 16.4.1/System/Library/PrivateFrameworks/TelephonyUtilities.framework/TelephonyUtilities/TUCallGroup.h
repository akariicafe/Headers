@class NSArray, NSString;

@interface TUCallGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *calls;
@property (readonly, nonatomic) int status;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)initWithCalls:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)description;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;
- (id)initWithCall:(id)a0;
- (BOOL)isEqualToCallGroup:(id)a0;

@end
