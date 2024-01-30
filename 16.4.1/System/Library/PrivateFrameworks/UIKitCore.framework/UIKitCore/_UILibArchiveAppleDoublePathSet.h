@class NSMutableSet;

@interface _UILibArchiveAppleDoublePathSet : NSObject {
    NSMutableSet *_confirmAppleDoublePaths;
    NSMutableSet *_pathsWithDotUnderscorePrefixedFilenames;
}

+ (BOOL)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)a0;
- (void)confirmExactAppleDoubleFilesForItem:(id)a0;
- (BOOL)isConfirmedExactAppleDoubleItem:(id)a0;
- (id)pathToRealFileIfConfirmedAppleDoubleItem:(id)a0;

@end
