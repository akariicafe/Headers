@class NSString;

@interface CNMutableInstantMessageAddress : CNInstantMessageAddress

@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *service;

- (id)freeze;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
