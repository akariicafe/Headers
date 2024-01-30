@class NSObject, FTStartBatchRecoverRequest;
@protocol FLTBFBufferAccessor, NSCopying;

@interface FTMutableBatchRecoverStreamingRequest : FTBatchRecoverStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartBatchRecoverRequest *contentAsFTStartBatchRecoverRequest;
@property (copy, nonatomic) NSObject<FLTBFBufferAccessor, NSCopying> *content;

+ (Class)content_mutableClassForType:(long long)a0;
+ (long long)content_typeForMutableObject:(id)a0;
+ (long long)content_typeForObject:(id)a0;

- (void)setContent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
