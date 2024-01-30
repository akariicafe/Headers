@class NSString, NSOrderedSet;

@interface TDSchemaElementProduction : TDSimpleArtworkElementProduction

@property (retain, nonatomic) NSString *folderName;
@property (retain, nonatomic) NSOrderedSet *slices;

- (id)relativePath;
- (id)associatedFileURLWithDocument:(id)a0;
- (void)generateNewRendition;

@end
