@class NSString, NSSet, RCSavedRecordingsController;
@protocol RCFolderIdentifier;

@interface RCBuiltinRecordingsFolder : NSObject <RCFolder> {
    long long _folderType;
}

@property (readonly, nonatomic) id<RCFolderIdentifier> uniqueID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) long long folderType;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) unsigned long long playableCount;
@property (readonly, nonatomic) NSSet *recordings;
@property (readonly, nonatomic) RCSavedRecordingsController *contentsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containsRecording:(id)a0;
- (id)initWithType:(long long)a0;

@end
