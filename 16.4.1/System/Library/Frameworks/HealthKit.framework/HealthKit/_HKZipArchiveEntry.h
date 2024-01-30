@class NSString, NSData, _HKZipArchiveExtractor;

@interface _HKZipArchiveEntry : NSObject {
    _HKZipArchiveExtractor *_extractor;
    struct archive_entry { } *_entry;
    NSData *_data;
    long long _enumerationCount;
}

@property (readonly, nonatomic) BOOL didReadEntryData;
@property (readonly, copy, nonatomic) NSString *pathname;

+ (BOOL)_assignReadError:(id *)a0 archive:(struct archive { } *)a1;

- (void).cxx_destruct;
- (id)dataWithError:(id *)a0;
- (BOOL)_enumerateLinesInCurrentEntryWithError:(id *)a0 block:(id /* block */)a1;
- (id)_getDataWithBufferingWithMaxSizeBytes:(unsigned long long)a0 error:(id *)a1;
- (id)_getDataWithSize:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_isExtractorStateValidWithError:(id *)a0;
- (id)dataWithMaxSizeBytes:(unsigned long long)a0 error:(id *)a1;
- (BOOL)enumerateLinesWithError:(id *)a0 block:(id /* block */)a1;
- (id)initWithExtractor:(id)a0 currentEntry:(struct archive_entry { } *)a1 pathname:(id)a2;

@end
