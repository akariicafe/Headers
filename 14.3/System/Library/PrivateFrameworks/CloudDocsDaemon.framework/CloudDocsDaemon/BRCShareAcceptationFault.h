@interface BRCShareAcceptationFault : BRCDocumentItem

- (BOOL)isShareAcceptationFault;
- (id)initWithFilename:(id)a0 itemID:(id)a1 appLibrary:(id)a2 clientZone:(id)a3 sharingOptions:(unsigned long long)a4;
- (id)asShareAcceptationFault;
- (void)markLiveFromStageAsShareAcceptationFault;
- (void)stageShareAcceptationFaultWithName:(id)a0;
- (void)deleteShareAcceptationFault;

@end
