@interface _PASFileBackedMallocZone : NSObject

+ (struct _malloc_zone_t { void *x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; char *x9; void /* function */ *x10; void /* function */ *x11; struct malloc_introspection_t *x12; unsigned int x13; void /* function */ *x14; void /* function */ *x15; void /* function */ *x16; void /* function */ *x17; } *)mallocZoneWithFixedSize:(unsigned long long)a0 error:(id *)a1;
+ (BOOL)_allocatorForFileBackedMappingWithHeapSize:(unsigned long long)a0 context:(struct { struct _PASBuddyAllocator *x0; void *x1; unsigned long long x2; void *x3; struct atomic_flag { _Atomic BOOL x0; } x4; } *)a1 error:(id *)a2;

@end
