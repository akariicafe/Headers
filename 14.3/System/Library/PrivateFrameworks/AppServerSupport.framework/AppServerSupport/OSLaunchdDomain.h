@interface OSLaunchdDomain : NSObject {
    int _type;
    unsigned long long _handle;
}

+ (id)loginwindowDomain;
+ (id)domainForUser:(unsigned int)a0;
+ (id)currentDomain;
+ (id)domainForPid:(int)a0;

- (id)initWithType:(int)a0 handle:(unsigned long long)a1;

@end
