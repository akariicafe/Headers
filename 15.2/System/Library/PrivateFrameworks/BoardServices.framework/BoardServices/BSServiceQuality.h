@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)userInitiated;
+ (id)background;
+ (id)main;
+ (id)serviceWithClass:(unsigned int)a0;
+ (id)utility;
+ (id)userInteractive;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
