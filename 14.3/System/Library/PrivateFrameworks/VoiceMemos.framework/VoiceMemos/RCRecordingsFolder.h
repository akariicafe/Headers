@class NSString, NSSet, RCSavedRecordingsController;
@protocol RCFolderIdentifier;

@interface RCRecordingsFolder : NSManagedObject <RCMutableFolder>

@property (readonly, nonatomic) long long countOfRecordings;
@property (retain, nonatomic) NSString *encryptedName;
@property (retain, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long rank;
@property (readonly, nonatomic) id<RCFolderIdentifier> uniqueID;
@property (readonly, nonatomic) long long folderType;
@property (readonly, nonatomic) unsigned long long playableCount;
@property (readonly, nonatomic) NSSet *recordings;
@property (readonly, nonatomic) RCSavedRecordingsController *contentsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingCount;

@end
