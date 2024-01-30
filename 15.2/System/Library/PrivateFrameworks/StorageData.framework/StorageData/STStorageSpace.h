@interface STStorageSpace : NSObject

@property (readonly) long long totalBytes;
@property (readonly) long long freeBytes;
@property (readonly) long long purgeableBytes;
@property (readonly) long long usedBytes;
@property (readonly) long long availableBytes;
@property (readonly) BOOL isLowSpace;
@property (readonly) BOOL isVeryLowSpace;

- (id)initWithTotal:(long long)a0 free:(long long)a1 purgeable:(long long)a2;

@end
