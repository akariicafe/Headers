@class NSString;

@interface BMStreamsAccessDescriptor : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long permissions;
@property (readonly, nonatomic) unsigned long long streamType;
@property (readonly, nonatomic) NSString *streamIdentifier;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithPermissions:(unsigned long long)a0 streamType:(unsigned long long)a1 streamIdentifier:(id)a2;
- (id)accessDescriptorWithPermissions:(unsigned long long)a0;

@end
