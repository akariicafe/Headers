@interface WebCoreStatistics : NSObject

+ (id)statistics;
+ (void)emptyCache;
+ (int)cachedPageCount;
+ (id)javaScriptRootObjectTypeCounts;
+ (unsigned long long)javaScriptProtectedGlobalObjectsCount;
+ (id)javaScriptProtectedObjectTypeCounts;
+ (unsigned long long)javaScriptObjectsCount;
+ (unsigned long long)javaScriptGlobalObjectsCount;
+ (unsigned long long)javaScriptProtectedObjectsCount;
+ (id)javaScriptObjectTypeCounts;
+ (void)garbageCollectJavaScriptObjects;
+ (void)garbageCollectJavaScriptObjectsOnAlternateThreadForDebugging:(BOOL)a0;
+ (void)setJavaScriptGarbageCollectorTimerEnabled:(BOOL)a0;
+ (unsigned long long)iconPageURLMappingCount;
+ (unsigned long long)iconRetainedPageURLCount;
+ (unsigned long long)iconRecordCount;
+ (unsigned long long)iconsWithDataCount;
+ (unsigned long long)cachedFontDataCount;
+ (unsigned long long)cachedFontDataInactiveCount;
+ (void)purgeInactiveFontData;
+ (unsigned long long)glyphPageCount;
+ (BOOL)shouldPrintExceptions;
+ (void)setShouldPrintExceptions:(BOOL)a0;
+ (void)setCacheDisabled:(BOOL)a0;
+ (void)startIgnoringWebCoreNodeLeaks;
+ (void)stopIgnoringWebCoreNodeLeaks;
+ (id)memoryStatistics;
+ (void)returnFreeMemoryToSystem;
+ (int)cachedFrameCount;
+ (int)autoreleasedPageCount;
+ (unsigned long long)javaScriptNoGCAllowedObjectsCount;
+ (unsigned long long)javaScriptReferencedObjectsCount;
+ (id)javaScriptRootObjectClasses;
+ (unsigned long long)javaScriptInterpretersCount;

@end
