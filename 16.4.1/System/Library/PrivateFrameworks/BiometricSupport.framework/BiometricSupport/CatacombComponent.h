@interface CatacombComponent : NSObject <NSCopying> {
    struct { unsigned int userID; struct { unsigned int type; unsigned char uuid[16]; } group; } _component;
}

@property (readonly, nonatomic) struct { unsigned int x0; struct { unsigned int x0; unsigned char x1[16]; } x1; } *component;
@property (readonly, nonatomic) unsigned int userID;

+ (id)componentForUserID:(unsigned int)a0;
+ (id)masterComponent;

- (BOOL)isEqualToComponent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isUserComponent;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isMasterComponent;
- (id)description;

@end
