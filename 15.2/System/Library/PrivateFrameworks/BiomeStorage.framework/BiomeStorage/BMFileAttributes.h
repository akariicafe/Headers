@class NSString;

@interface BMFileAttributes : NSObject <NSCopying>

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned long long permission;
@property (nonatomic) unsigned long long protectionClass;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithFilePath:(id)a0 permission:(unsigned long long)a1 protectionClass:(unsigned long long)a2;

@end
