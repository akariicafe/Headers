@class NSData, NSString, NSMutableData;

@interface HMIDESMutableFloatArray : HMFObject <HMFLogging, NSCopying> {
    NSMutableData *_data;
}

@property (readonly, retain, nonatomic) NSData *data;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) const float *floats;
@property (readonly, nonatomic) float *mutableFloats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)add:(id)a0;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)appendArray:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)subtract:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)scale:(float)a0;
- (id)initWithFloats:(const float *)a0 count:(unsigned long long)a1;
- (void)appendFloats:(const float *)a0 count:(unsigned long long)a1;
- (id)initWithDataTensor:(id)a0;
- (void)fillWithFloat:(float)a0;
- (id)floatArrayByAdding:(id)a0;
- (id)floatArrayByScaling:(float)a0;
- (id)floatArrayBySubtracting:(id)a0;
- (id)initWithValue:(float)a0 count:(unsigned long long)a1;
- (float)l2Norm;

@end
