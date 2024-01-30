@class NSString;

@interface BSServiceQuality : NSObject <NSCopying> {
    NSString *_serviceClassName;
    BOOL _singleton;
    BOOL _main;
}

@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) int relativePriority;

+ (id)utility;
+ (id)background;
+ (id)serviceWithClass:(unsigned int)a0 relativePriority:(int)a1;
+ (id)serviceWithClass:(unsigned int)a0;
+ (id)main;
+ (id)userInitiated;
+ (id)userInteractive;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
