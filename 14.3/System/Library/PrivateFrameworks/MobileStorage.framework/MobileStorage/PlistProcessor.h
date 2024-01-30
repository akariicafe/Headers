@interface PlistProcessor : NSObject

+ (id)sharedPlistProcessor;

- (id)copyAndFixPlist:(id)a0 forMountPoint:(id)a1;
- (void)scanPlistsAtPath:(id)a0 execBlock:(id /* block */)a1;
- (BOOL)verifyPlist:(id)a0 forMountPoint:(id)a1;

@end
