@interface CAMTimelapseDiskUtilities : NSObject

+ (BOOL)hasPendingWork;
+ (BOOL)writeSecondaryStateToDisk:(id)a0 forTimelapseUUID:(id)a1;
+ (id)directoryPathForTimelapseUUID:(id)a0;
+ (id)timelapseUUIDsOnDisk;
+ (id)updateSecondaryStateForTimelapseUUID:(id)a0 withStopReasons:(long long)a1 stopTime:(id)a2;
+ (id)timelapseDirectoryPathCreateIfNeeded:(BOOL)a0;
+ (id)secondaryStateFileName;
+ (id)readSortedStatesFromDiskMergeSecondaryState:(BOOL)a0;
+ (id)secondaryStateFilePathForTimelapseUUID:(id)a0;
+ (id)sortedArrayFromFilePathDictionary:(id)a0 reverse:(BOOL)a1;
+ (id)readSecondaryStateForTimelapseUUID:(id)a0;
+ (id)stateFileName;
+ (id)fileNameForImageVISIndex:(long long)a0;
+ (id)readFrameFilePathsForTimelapseUUID:(id)a0;
+ (BOOL)writeStateToDisk:(id)a0 createDirectoryIfNeeded:(BOOL)a1;
+ (long long)frameIndexFromImageFileName:(id)a0;
+ (id)dummyFilePathForTimelapseUUID:(id)a0;
+ (id)stateFilePathForTimelapseUUID:(id)a0;
+ (BOOL)removeDummyFileForTimelapseUUID:(id)a0;
+ (BOOL)reserveDummyFileForTimelapseUUID:(id)a0 width:(long long)a1 height:(long long)a2 useHEVC:(BOOL)a3;
+ (id)updateSecondaryStateForTimelapseUUID:(id)a0 forStateReadSuccessfully:(BOOL)a1;
+ (id)dummyFileName;
+ (id)updateSecondaryStateForMovieWriteAttemptForTimelapseUUID:(id)a0;
+ (id)timelapseDirectoryPath;
+ (id)fileNameForImageFrameIndex:(long long)a0;
+ (id)readStateForTimelapseUUID:(id)a0 mergeSecondaryState:(BOOL)a1;

@end
