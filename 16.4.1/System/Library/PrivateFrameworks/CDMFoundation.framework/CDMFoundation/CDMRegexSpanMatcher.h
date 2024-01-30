@class NSString, NSNumber, NSArray;

@interface CDMRegexSpanMatcher : NSObject <CDMProtoSpanMatcher> {
    NSString *_cachedFilePath;
    NSNumber *_fileVersion;
    NSArray *_regexEntries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readRegexAssetFromPath:(id)a0;

- (id)initWithCachePath:(id)a0;
- (void).cxx_destruct;
- (id)matchSpansForTokenChain:(id)a0;

@end
