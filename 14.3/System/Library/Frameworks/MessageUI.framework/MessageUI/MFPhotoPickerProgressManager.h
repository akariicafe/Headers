@class NSMutableDictionary;

@interface MFPhotoPickerProgressManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *progressItems;

- (id)init;
- (void).cxx_destruct;
- (double)progressForIndexPath:(id)a0;
- (BOOL)requestExistsForIndexPath:(id)a0;
- (void)setProgress:(double)a0 forIndexPath:(id)a1;
- (void)setExportSession:(id)a0 forIndexPath:(id)a1;
- (void)cancelEverythingAtIndexPath:(id)a0;
- (void)setImageRequestID:(int)a0 forIndexPath:(id)a1;
- (void)_cancelProgressItem:(id)a0;
- (BOOL)anyRequestExists;
- (void)cancelEverything;

@end
