@class NSMutableDictionary;

@interface MFPhotoPickerProgressManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *progressItems;

- (void).cxx_destruct;
- (id)init;
- (BOOL)anyRequestExists;
- (void)cancelEverything;
- (double)progressForIndexPath:(id)a0;
- (BOOL)requestExistsForIndexPath:(id)a0;
- (void)setProgress:(double)a0 forIndexPath:(id)a1;
- (void)setExportSession:(id)a0 forIndexPath:(id)a1;
- (void)cancelEverythingAtIndexPath:(id)a0;
- (void)setImageRequestID:(int)a0 forIndexPath:(id)a1;
- (void)_cancelProgressItem:(id)a0;

@end
