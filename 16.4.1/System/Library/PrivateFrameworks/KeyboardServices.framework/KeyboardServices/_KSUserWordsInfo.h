@class _KSFileEntry, NSDate;

@interface _KSUserWordsInfo : NSObject {
    NSDate *_modifiedDate;
    unsigned long long _size;
    _KSFileEntry *_file;
}

+ (id)keyboardDirectory;
+ (id)infoWithRecord:(id)a0;
+ (id)filesForLanguage:(id)a0;
+ (id)infoWithFiles:(id)a0;
+ (id)keyForData;
+ (id)keyNamesExcludingData;

- (id)initWithRecord:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFiles:(id)a0;
- (BOOL)isBetterThan:(id)a0;
- (void)saveToRecord:(id)a0;

@end
