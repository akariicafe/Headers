@class NSArray, AMSCircularBuffer, NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, readonly, nonatomic) AMSCircularBuffer *buffer;
@property (class, readonly, nonatomic) NSArray *harURLFilters;
@property (class, nonatomic, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain, nonatomic) NSNumber *maxBufferSizeOverride;

+ (void)initialize;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (BOOL)_disabled;
+ (void)_updateHarFileFilters;
+ (void)addHTTPArchive:(id)a0;
+ (void)_writeHTTPArchivesToDiskCompressed:(BOOL)a0;
+ (void)_updateMaxBufferSize;
+ (id)_harURLFilters;

@end
