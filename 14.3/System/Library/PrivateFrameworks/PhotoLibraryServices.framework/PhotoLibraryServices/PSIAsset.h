@class PSIDate;

@interface PSIAsset : PSIObject <NSCopying>

@property (readonly) PSIDate *creationDate;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUID:(id)a0 creationDate:(id)a1;

@end
