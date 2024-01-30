@class NSString;

@interface SFUPackageInputBundle : NSObject <SFUInputBundle> {
    NSString *_rootPath;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (id)_existingPathForEntryName:(id)a0 isGz:(BOOL *)a1;
- (id)bufferedInputStreamForEntry:(id)a0;
- (void)copyEntry:(id)a0 toFile:(id)a1;
- (unsigned int)crc32ForEntry:(id)a0;
- (BOOL)hasEntryWithName:(id)a0;
- (id)inputStreamForEntry:(id)a0;
- (long long)lengthOfEntry:(id)a0;

@end
