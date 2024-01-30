@class NSString;

@interface MTLResourceAllocationInfo : NSObject <NSCopying, NSCoding>

@property (readonly) NSString *memoryPool;
@property (readonly) unsigned long long virtualSize;
@property (readonly) unsigned long long residentSize;
@property (readonly) unsigned long long dirtySize;
@property (readonly) BOOL pageoffRequired;
@property (readonly) BOOL purgeable;
@property (readonly) unsigned long long uniqueIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
