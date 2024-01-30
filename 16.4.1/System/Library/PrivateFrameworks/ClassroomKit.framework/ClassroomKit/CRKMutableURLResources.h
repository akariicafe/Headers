@class NSNumber, NSDate;

@interface CRKMutableURLResources : CRKURLResources

@property (retain, nonatomic, getter=isDirectory) NSNumber *directory;
@property (copy, nonatomic) NSNumber *documentIdentifier;
@property (retain, nonatomic) NSDate *lastModificationDate;
@property (nonatomic) unsigned long long size;

- (void)setDirectory:(id)a0;
- (void)setSize:(unsigned long long)a0;
- (void)setDocumentIdentifier:(id)a0;
- (void)setLastModificationDate:(id)a0;

@end
