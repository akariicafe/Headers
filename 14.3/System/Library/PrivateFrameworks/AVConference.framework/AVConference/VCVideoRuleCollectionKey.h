@interface VCVideoRuleCollectionKey : NSObject <NSCopying>

@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) unsigned char transportType;
@property (readonly, nonatomic) unsigned char encodingType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(int)a0 transportType:(unsigned char)a1 encodingType:(unsigned char)a2;

@end
