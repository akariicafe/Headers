@class NSEntityDescription, NSManagedObjectID;

@interface NSManagedImmutableObject : NSObject

@property (readonly) NSEntityDescription *entity;
@property (readonly) NSManagedObjectID *objectID;

+ (id)retain;
+ (id)_retain_1;
+ (Class)classForEntity:(id)a0;
+ (void)_release_1;
+ (void)release;
+ (struct { int x0; void *x1; id x2; unsigned long long x3; unsigned char x4; unsigned long long x5; void *x6; id x7; char *x8; struct _moFactoryClassFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned int x6 : 26; } x9; } *)_PFMOClassFactoryData;
+ (BOOL)_isGeneratedClass;
+ (BOOL)_isGeneratedClass_1;
+ (id)allocWithEntity:(id)a0;

- (id)methodSignatureForSelector:(SEL)a0;
- (id)valueForKey:(id)a0;
- (void /* function */ *)methodForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;

@end
