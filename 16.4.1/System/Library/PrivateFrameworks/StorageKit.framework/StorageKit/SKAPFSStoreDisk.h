@class NSString;

@interface SKAPFSStoreDisk : SKDisk

@property (retain) NSString *apfsContainerUUID;
@property (retain) NSString *apfsContainerIdentifier;
@property (readonly) NSString *apfsUUID;

- (void)updateWithDictionary:(id)a0;
- (id)container;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)minimalDictionaryRepresentation;
- (BOOL)canResize;
- (id)innerDescription;
- (BOOL)isOurContainerWithDisk:(id)a0;

@end
