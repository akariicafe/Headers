@class NSUUID;

@interface HMDWatchSync : HMFObject <NSCopying>

@property unsigned long long syncOption;
@property (readonly, copy) NSUUID *identifier;
@property BOOL inProgress;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)a0 syncOption:(unsigned long long)a1 inProgress:(BOOL)a2;
- (id)initWithSyncOption:(unsigned long long)a0;
- (id)initWithIdentifier:(id)a0 syncOption:(unsigned long long)a1;

@end
