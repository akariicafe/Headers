@class NSString, NSData, NSMutableArray;

@interface PKDiff : NSObject <NSSecureCoding> {
    NSMutableArray *_hunks;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *passUniqueID;
@property (copy, nonatomic) NSData *passManifestHash;

- (long long)compare:(id)a0;
- (id)anyKey;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (long long)hunkCount;
- (void)removeHunkForKey:(id)a0;
- (BOOL)getHunkForKey:(id)a0 oldValue:(id *)a1 newValue:(id *)a2 message:(id *)a3;
- (void)addHunkWithKey:(id)a0 oldValue:(id)a1 newValue:(id)a2 message:(id)a3;
- (void)enumerateHunks:(id /* block */)a0;
- (unsigned long long)_hunkIndexForKey:(id)a0;
- (BOOL)isEqualToDiff:(id)a0;
- (void)key:(id *)a0 oldValue:(id *)a1 newValue:(id *)a2 message:(id *)a3 forHunkAtIndex:(long long)a4;
- (void)addHunksFromDiff:(id)a0;
- (unsigned long long)hash;

@end
