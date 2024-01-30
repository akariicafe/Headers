@class NSObject, FLTSSUExampleUtterance, FLTSSUExampleEncodedVector;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FLTMutableSSUExample : FLTSSUExample

@property (nonatomic) long long data_type;
@property (copy, nonatomic) FLTSSUExampleUtterance *dataAsFLTSSUExampleUtterance;
@property (copy, nonatomic) FLTSSUExampleEncodedVector *dataAsFLTSSUExampleEncodedVector;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *data;

+ (Class)data_mutableClassForType:(long long)a0;
+ (long long)data_typeForMutableObject:(id)a0;
+ (long long)data_typeForObject:(id)a0;

- (void)setData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
