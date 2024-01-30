@class NSString;

@interface ISHashError : NSObject <NSCopying>

@property (copy, nonatomic) NSString *actualHashString;
@property (copy, nonatomic) NSString *expectedHashString;
@property (nonatomic) long long rangeEnd;
@property (nonatomic) long long rangeStart;
@property (readonly, nonatomic) NSString *hashFailureHeaderString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
