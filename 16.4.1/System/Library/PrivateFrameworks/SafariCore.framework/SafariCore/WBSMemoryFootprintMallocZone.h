@class NSString;

@interface WBSMemoryFootprintMallocZone : NSObject <NSSecureCoding> {
    unsigned long long _addr;
    struct malloc_statistics_t { unsigned int blocks_in_use; unsigned long long size_in_use; unsigned long long max_size_in_use; unsigned long long size_allocated; } _statistics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long sizeInUse;
@property (readonly, nonatomic) unsigned long long sizeAllocated;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithMallocZone:(struct _malloc_zone_t { void *x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; char *x9; void /* function */ *x10; void /* function */ *x11; struct malloc_introspection_t *x12; unsigned int x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; void /* function */ *x18; } *)a0;

@end
