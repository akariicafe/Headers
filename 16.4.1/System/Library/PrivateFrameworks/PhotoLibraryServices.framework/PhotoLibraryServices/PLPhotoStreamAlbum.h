@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (retain, nonatomic) NSString *personID;

+ (id)entityName;
+ (id)photoStreamAlbumWithStreamID:(id)a0 inPhotoLibrary:(id)a1 createIfNeeded:(BOOL)a2;
+ (id)keyPathsForValuesAffectingPersonID;

- (void)awakeFromInsert;
- (void)enforceImageLimitIfNecessary;
- (BOOL)shouldDeleteWhenEmpty;
- (void)addAssetOrderedByDataTaken:(id)a0;

@end
