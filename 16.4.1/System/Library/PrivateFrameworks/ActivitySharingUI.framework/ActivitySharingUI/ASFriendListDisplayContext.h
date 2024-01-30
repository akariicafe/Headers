@interface ASFriendListDisplayContext : NSObject

@property (nonatomic) long long displayMode;
@property (nonatomic) long long displayFilter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
