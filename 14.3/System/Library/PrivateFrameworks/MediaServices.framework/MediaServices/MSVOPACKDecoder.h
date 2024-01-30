@class NSArray, NSMapTable, NSDictionary, NSString, NSMutableArray;

@interface MSVOPACKDecoder : NSCoder <MSVSegmentedSubDecoder>

@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSMapTable *objectLookupTable;
@property (readonly, nonatomic) NSMutableArray *wrapperStack;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decodedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (id)decodedObjectOfClass:(Class)a0 fromData:(id)a1 userInfo:(id)a2 error:(id *)a3;
+ (id)decodedObjectOfClasses:(id)a0 fromData:(id)a1 userInfo:(id)a2 error:(id *)a3;
+ (id)decodedObjectOfClasses:(id)a0 fromData:(id)a1 error:(id *)a2;

- (int)decodeIntForKey:(id)a0;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (float)decodeFloatForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)requiresSecureCoding;
- (id)initForReadingFromData:(id)a0 error:(id *)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (void)msv_setUserInfo:(id)a0;
- (id)msv_userInfo;
- (id)decodeRootObjectOfClasses:(id)a0 error:(id *)a1;
- (void)beginDecodingPartialTopLevelObjectOfClasses:(id)a0;
- (void)finishDecodingPartialTopLevelObject;
- (id)initForReadingFromData:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (id)_decodeOPACKObject:(id)a0 ofClasses:(id)a1;
- (id)_decodeNumberForKey:(id)a0;
- (void)_validateClass:(Class)a0 fromSupportedClasses:(id)a1;
- (BOOL)containsValueForKey:(id)a0;

@end
