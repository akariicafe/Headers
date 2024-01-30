@class NSString;

@interface LSServerOpenStagingIOPersonality : NSObject <LSOpenStagingDirectoryManagerIOPersonality>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mainUserContainerURL;
- (id)makeStagingDirectoryNodeInContainer:(id)a0 error:(id *)a1;
- (struct optional<LaunchServices::StagingDirectoryInfo> { union { char x0; struct StagingDirectoryInfo { id x0; id x1; int x2; } x1; } x0; BOOL x1; })stagingDirectoryInfoForPersonaUniqueString:(id)a0 error:(id *)a1;
- (struct optional<unsigned long long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })stagingDirectoryKeyForFileHandle:(id)a0 error:(id *)a1;
- (struct optional<unsigned long long> { union { char x0; unsigned long long x1; } x0; BOOL x1; })stagingDirectoryKeyForNode:(id)a0 error:(id *)a1;

@end
