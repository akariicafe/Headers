@class NSArray, NSString;

@interface TUCallGroup : NSObject

@property (readonly, copy, nonatomic) NSArray *calls;
@property (readonly, nonatomic) int status;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)initWithCalls:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCall:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCallGroup:(id)a0;

@end
