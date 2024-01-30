@class NSString;

@interface CTCall : NSObject

@property (copy, nonatomic) NSString *callState;
@property (copy, nonatomic) NSString *callID;

+ (id)callForCXCall:(id)a0;
+ (id)callForCTCallRef:(struct __CTCall { } *)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
