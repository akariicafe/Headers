@class NSArray;

@interface RCSavedRecordingsModelChangeContext : NSObject

@property (readonly, copy, nonatomic) NSArray *insertedObjects;
@property (readonly, copy, nonatomic) NSArray *updatedObjects;
@property (readonly, copy, nonatomic) NSArray *deletedObjects;

- (void).cxx_destruct;
- (id)insertedRecordingURIsIncludingTemporaryURIs:(BOOL)a0;
- (id)updatedRecordingURIsIncludingTemporaryURIs:(BOOL)a0;
- (id)deletedRecordingURIsIncludingTemporaryURIs:(BOOL)a0;
- (id)_recordingURIsInArray:(id)a0 includeTemporaryURIs:(BOOL)a1;
- (id)initWithStateFromManagedObjectContext:(id)a0;

@end
