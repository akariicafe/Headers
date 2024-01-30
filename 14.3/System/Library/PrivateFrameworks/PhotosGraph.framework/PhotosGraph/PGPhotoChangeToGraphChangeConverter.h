@class NSMutableDictionary;

@interface PGPhotoChangeToGraphChangeConverter : NSObject

@property (retain, nonatomic) NSMutableDictionary *entityTranslatorByEntityName;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (id)graphChangesWithPhotoChange:(id)a0 progressBlock:(id /* block */)a1;
- (void)_registerTranslatorsWithPhotoLibrary:(id)a0;

@end
