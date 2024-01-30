@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying>

@property (copy, nonatomic) id /* block */ itemLookupBlock;
@property (copy, nonatomic) NSString *platformName;
@property (copy, nonatomic) NSString *systemVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
