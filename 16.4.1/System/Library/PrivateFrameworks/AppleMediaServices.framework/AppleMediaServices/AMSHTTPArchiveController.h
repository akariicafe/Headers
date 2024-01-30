@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, nonatomic, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain, nonatomic) NSNumber *maxBufferSizeOverride;

+ (void)initialize;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (void)addHTTPArchive:(id)a0;
+ (BOOL)_disabled;
+ (id)_harURLFilters;
+ (void)_updateHarFileFilters;
+ (id)harURLFilters;

@end
