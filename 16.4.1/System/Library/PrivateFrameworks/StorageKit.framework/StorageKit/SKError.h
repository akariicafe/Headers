@class NSBundle;

@interface SKError : NSObject

@property (class, readonly) NSBundle *frameworkBundle;

+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0 disks:(id)a1 userInfo:(id)a2;
+ (id)localizedDescriptionForCode:(long long)a0;

@end
