@interface BRCShareAcceptationFault : BRCDocumentItem

- (id)asShareAcceptationFault;
- (BOOL)isShareAcceptationFault;
- (void)deleteShareAcceptationFault;
- (id)initWithFilename:(id)a0 itemID:(id)a1 appLibrary:(id)a2 clientZone:(id)a3 sharingOptions:(unsigned long long)a4;
- (void)markLiveFromStageAsShareAcceptationFault;
- (void)stageShareAcceptationFaultWithName:(id)a0;

@end
