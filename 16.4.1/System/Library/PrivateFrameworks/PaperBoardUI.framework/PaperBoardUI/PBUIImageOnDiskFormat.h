@class NSString, NSDictionary;

@interface PBUIImageOnDiskFormat : NSObject <NSCopying>

@property (class, readonly, nonatomic) PBUIImageOnDiskFormat *defaultATX;
@property (class, readonly, nonatomic) PBUIImageOnDiskFormat *png;

@property (readonly, nonatomic) NSString *filenameExtension;
@property (readonly, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) NSDictionary *destinationOptions;
@property (readonly, nonatomic) NSDictionary *addImageOptions;

+ (id)atxWithBlockSize:(unsigned int)a0 twiddling:(BOOL)a1;

- (id)initWithTypeIdentifier:(id)a0 filenameExtension:(id)a1 destinationOptions:(id)a2 addImageOptions:(id)a3;
- (id)resolveAddImageOptionsForImage:(struct CGImage { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formatByAppendingDestinationOptions:(id)a0 addImageOptions:(id)a1;
- (id)initWithTypeRecord:(id)a0 destinationOptions:(id)a1 addImageOptions:(id)a2;
- (id)resolveDestinationOptionsForImage:(struct CGImage { } *)a0;
- (void).cxx_destruct;

@end
