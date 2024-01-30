@class NSString, NSSet, NSDictionary;

@interface VSAccountChannels : NSObject <NSCopying>

@property (copy, nonatomic) NSString *providerID;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSSet *channelIDs;
@property (copy, nonatomic) NSDictionary *providerInfo;

+ (id)deserializationResultWithData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)serializationResult;
- (id)serializationResultWithFormat:(unsigned long long)a0;

@end
