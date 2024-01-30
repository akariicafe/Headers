@interface _ICNAFolderReportToDevice : NSObject {
    int _folderCollaborationMatrix[3][3];
}

- (id)init;
- (unsigned long long)countOfFoldersWithCollaborationStatus:(long long)a0 collaborationType:(long long)a1;
- (void)updateFolderCollaborationMatrixWithCollaborationStatus:(id)a0 collaborationType:(id)a1;

@end
