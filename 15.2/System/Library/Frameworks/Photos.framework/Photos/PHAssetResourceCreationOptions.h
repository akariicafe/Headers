@class NSString, NSDate;

@interface PHAssetResourceCreationOptions : NSObject <NSCopying>

@property (retain, nonatomic) NSDate *alternateImportImageDate;
@property (nonatomic) BOOL shouldIngestInPlace;
@property (nonatomic) int burstPickType;
@property (retain, nonatomic) NSString *forcePairingIdentifier;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *uniformTypeIdentifier;
@property (nonatomic) BOOL shouldMoveFile;

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
