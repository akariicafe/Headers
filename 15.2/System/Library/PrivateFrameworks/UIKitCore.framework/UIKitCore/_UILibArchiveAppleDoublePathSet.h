@class NSMutableSet;

@interface _UILibArchiveAppleDoublePathSet : NSObject {
    NSMutableSet *_confirmAppleDoublePaths;
    NSMutableSet *_pathsWithDotUnderscorePrefixedFilenames;
}

+ (BOOL)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)a0;

- (void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isConfirmedExactAppleDoubleItem:(id)a0;
- (void)confirmExactAppleDoubleFilesForItem:(id)a0;
- (id)pathToRealFileIfConfirmedAppleDoubleItem:(id)a0;

@end
