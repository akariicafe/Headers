@class NSDictionary;

@interface DESCategoricalMetadataEncoder : NSObject <DESMetadataEncoder> {
    NSDictionary *_schemaDict;
}

@property (readonly, nonatomic) BOOL useRange;

- (void).cxx_destruct;
- (id)zeroWithLength:(unsigned long long)a0;
- (id)encodeNumber:(id)a0 toLength:(unsigned long long)a1;
- (id)encodeNumberVector:(id)a0 toLength:(unsigned long long)a1;
- (id)encodeString:(id)a0 toLength:(unsigned long long)a1;
- (id)encodeStringVector:(id)a0 toLength:(unsigned long long)a1;
- (unsigned long long)findBucketIndexOfNumber:(id)a0 inItems:(id)a1;
- (unsigned long long)findBucketIndexOfString:(id)a0 inItems:(id)a1;
- (id)initWithSingleSchema:(id)a0;

@end
