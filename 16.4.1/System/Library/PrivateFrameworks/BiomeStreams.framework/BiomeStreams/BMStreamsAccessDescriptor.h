@class NSString;

@interface BMStreamsAccessDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) unsigned long long streamType;
@property (readonly, nonatomic) NSString *streamIdentifier;
@property (readonly, nonatomic) unsigned long long domain;

- (id)accessDescriptorWithAccessMode:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithAccessMode:(unsigned long long)a0 streamType:(unsigned long long)a1 streamIdentifier:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
