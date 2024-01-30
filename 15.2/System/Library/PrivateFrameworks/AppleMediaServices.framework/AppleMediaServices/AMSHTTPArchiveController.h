@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, nonatomic, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain, nonatomic) NSNumber *maxBufferSizeOverride;

+ (void)initialize;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (id)_harURLFilters;
+ (id)harURLFilters;
+ (void)addHTTPArchive:(id)a0;
+ (BOOL)_disabled;
+ (void)_updateHarFileFilters;

@end
