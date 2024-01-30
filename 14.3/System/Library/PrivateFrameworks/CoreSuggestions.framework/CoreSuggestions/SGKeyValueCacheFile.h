@class NSData, NSString, NSMutableData;

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSData *_data;
    int _fd;
    NSString *_tmpDir;
    NSString *_tmpPath;
    NSString *_tmpDest;
    NSMutableData *_memStore;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)fullNameForEncodedContact:(id)a0;
+ (id)encodedStringForFullName:(id)a0;

- (id)initWithPath:(id)a0;
- (void)deleteValueByRecordIdSet:(id)a0;
- (id)initWithFileDescriptor:(int)a0;
- (id)init;
- (id)valueForKey:(id)a0 found:(BOOL *)a1;
- (void).cxx_destruct;
- (id)initBlank;
- (id)initTemporaryForOverwritingPath:(id)a0;
- (void)dealloc;
- (id)valueForKey:(id)a0;
- (void)deleteValueByRecordId:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1 fromRecordId:(id)a2;
- (id)description;
- (void)setValueIfNotPresent:(id)a0 forKey:(id)a1 fromRecordId:(id)a2;
- (id)_map;
- (void)commitTemporaryFile;
- (id)initInMemory;
- (void)encodeWithCoder:(id)a0;

@end
