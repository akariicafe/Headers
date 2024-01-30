@class NSString, NSData, NSMutableData;

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSData *_data;
    int _fd;
    NSString *_path;
    NSString *_tmpDir;
    NSMutableData *_memStore;
    SGKeyValueCacheFile *_other;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)pathToCache;
+ (id)fullNameForEncodedContact:(id)a0;
+ (id)encodedStringForFullName:(id)a0;
+ (void)clearCacheAtPath:(id)a0;
+ (id)keyValueCacheForPath:(id)a0;

- (id)initWithPath:(id)a0;
- (void)setValueIfNotPresent:(id)a0 forKey:(id)a1 fromRecordId:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void)commitTemporaryFile;
- (id)initWithCoder:(id)a0;
- (void)deleteValueByRecordId:(id)a0;
- (void)deleteValueByRecordIdSet:(id)a0;
- (id)valueForKey:(id)a0;
- (void)dealloc;
- (id)initTemporaryForOverwritingCache:(id)a0;
- (id)valueForKey:(id)a0 found:(BOOL *)a1;
- (id)_map;
- (id)initBlank;
- (id)init;
- (id)initWithFileDescriptor:(int)a0;
- (void)setValue:(id)a0 forKey:(id)a1 fromRecordId:(id)a2;
- (void)setValueIfNotPresentWithDict:(id)a0 fromRecordId:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initInMemory;

@end
