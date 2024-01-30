@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (retain, nonatomic) NSString *personID;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingPersonID;
+ (id)photoStreamAlbumWithStreamID:(id)a0 inPhotoLibrary:(id)a1 createIfNeeded:(BOOL)a2;

- (void)awakeFromInsert;
- (BOOL)shouldDeleteWhenEmpty;
- (void)addAssetOrderedByDataTaken:(id)a0;
- (void)enforceImageLimitIfNecessary;

@end
