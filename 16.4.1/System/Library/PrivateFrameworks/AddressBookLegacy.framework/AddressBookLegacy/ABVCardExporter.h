@interface ABVCardExporter : NSObject

+ (id)_vCard21RepresentationOfRecords:(id)a0;
+ (id)_vCard30RepresentationOfRecords:(id)a0;
+ (id)vCardRepresentationOfRecord:(void *)a0 mode:(int)a1;
+ (id)vCardRepresentationOfRecords:(id)a0 mode:(int)a1;

@end
