@class NSData;

@interface SHMediaLibraryItemMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) NSData *encodedSystemData;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithEncodedSystemData:(id)a0;
- (BOOL)validEncodedSystemData:(id)a0;

@end
