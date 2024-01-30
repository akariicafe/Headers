@interface TSPDocumentMetadata : TSPObject {
    BOOL _isInCollaborationModeForArchiving;
}

- (id)packageLocator;
- (long long)tsp_identifier;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (unsigned char)componentRequiredPackageIdentifier;
- (void)takeSnapshotWithCollaborationMode:(BOOL)a0;

@end
