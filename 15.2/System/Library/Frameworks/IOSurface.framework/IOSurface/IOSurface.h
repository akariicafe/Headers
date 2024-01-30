@interface IOSurface : NSObject <NSSecureCoding> {
    void *_impl;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long allocationSize;
@property (readonly) long long width;
@property (readonly) long long height;
@property (readonly) void *baseAddress;
@property (readonly) unsigned int pixelFormat;
@property (readonly) long long bytesPerRow;
@property (readonly) long long bytesPerElement;
@property (readonly) long long elementWidth;
@property (readonly) long long elementHeight;
@property (readonly) unsigned int seed;
@property (readonly) unsigned long long planeCount;
@property (readonly, getter=isInUse) BOOL inUse;
@property (readonly) int localUseCount;
@property (readonly) BOOL allowsPixelSizeCasting;

- (unsigned long long)traceID;
- (id)initWithMachPort:(unsigned int)a0;
- (id)initWithProperties:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (int)lockWithOptions:(unsigned int)a0 seed:(unsigned int *)a1;
- (int)unlockWithOptions:(unsigned int)a0 seed:(unsigned int *)a1;
- (void)incrementUseCount;
- (void)decrementUseCount;
- (unsigned long long)registryID;
- (unsigned long long)protectionOptions;
- (unsigned long long)_cfTypeID;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (void)removeAllAttachments;
- (unsigned long long)timestampAtIndex:(unsigned long long)a0;
- (BOOL)isDisplayable;
- (id)newChildSurfaceWithProperties:(id)a0;
- (id)initWithSurfaceID:(unsigned int)a0;
- (id)initWithClientBuffer:(struct __IOSurfaceClient { } *)a0;
- (long long)widthOfPlaneAtIndex:(unsigned long long)a0;
- (long long)heightOfPlaneAtIndex:(unsigned long long)a0;
- (long long)bytesPerRowOfPlaneAtIndex:(unsigned long long)a0;
- (long long)bytesPerElementOfPlaneAtIndex:(unsigned long long)a0;
- (long long)elementWidthOfPlaneAtIndex:(unsigned long long)a0;
- (long long)elementHeightOfPlaneAtIndex:(unsigned long long)a0;
- (void *)baseAddressOfPlaneAtIndex:(unsigned long long)a0;
- (void)setAttachment:(id)a0 forKey:(id)a1;
- (id)attachmentForKey:(id)a0;
- (void)removeAttachmentForKey:(id)a0;
- (void)setAllAttachments:(id)a0;
- (id)allAttachments;
- (BOOL)isSysMemOnly;
- (int)setPurgeable:(unsigned int)a0 oldState:(unsigned int *)a1;
- (BOOL)supportsProtectionOptions:(unsigned long long)a0;
- (void)setTimestamp:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)newWiringAssertion;

@end
