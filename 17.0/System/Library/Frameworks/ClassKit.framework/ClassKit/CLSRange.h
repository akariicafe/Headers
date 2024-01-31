@class NSString;

@interface CLSRange : CLSObject <CLSRelationable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (readonly, nonatomic) double delta;
@property (readonly, nonatomic) NSString *parentObjectID;

+ (BOOL)supportsSecureCoding;
+ (id)relations;
+ (id)compressOverlappingRanges:(id)a0;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStart:(double)a0 end:(double)a1;
- (id)initWithRange:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)overlapsWith:(id)a0;
- (BOOL)validateObject:(id *)a0;
- (void)mergeWithRange:(id)a0;

@end
