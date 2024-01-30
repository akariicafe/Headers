@class NSString;

@interface ATXClientModelCacheFileHandler : NSObject <ATXClientModelCacheFileHandlerProtocol> {
    NSString *_cacheFileBasePath;
    NSString *_clientModelId;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readSuggestionsFromCacheFromReadOnlyFileHandle:(id)a0;
+ (id)clientModelIdFromFileName:(id)a0;
+ (id)unarchiveCacheFileFromReadOnlyFileHandle:(id)a0;
+ (id)deserializeData:(id)a0;

- (void).cxx_destruct;
- (id)readOnlyFileHandleForSuggestionsCache;
- (id)cacheFilePath;
- (id)initWithCacheFileBasePath:(id)a0 clientModelId:(id)a1;
- (BOOL)deleteCachedSuggestionsFile;
- (BOOL)writeSerializedDataToCacheFile:(id)a0;
- (id)serializeSuggestionsData:(id)a0;
- (id)readSuggestionsFromCache;
- (BOOL)createCacheFileForClientModelCacheUpdate:(id)a0;

@end
