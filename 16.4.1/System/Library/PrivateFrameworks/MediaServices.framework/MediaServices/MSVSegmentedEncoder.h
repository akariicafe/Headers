@class MSVSegmentedCodingPackage, NSMutableDictionary, NSDictionary;
@protocol MSVSegmentedCoding;

@interface MSVSegmentedEncoder : NSCoder

@property (nonatomic) BOOL hasFinished;
@property (retain, nonatomic) MSVSegmentedCodingPackage *package;
@property (retain, nonatomic) id<MSVSegmentedCoding> rootObject;
@property (retain, nonatomic) NSMutableDictionary *subcoders;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeRootObject:(id)a0;
- (void).cxx_destruct;
- (void)finishEncoding;
- (id)initWithCodingPackage:(id)a0 userInfo:(id)a1;
- (id)_coderForKey:(id)a0;
- (id)initWithCodingPackage:(id)a0;
- (void)msv_setUserInfo:(id)a0;
- (id)msv_userInfo;

@end
