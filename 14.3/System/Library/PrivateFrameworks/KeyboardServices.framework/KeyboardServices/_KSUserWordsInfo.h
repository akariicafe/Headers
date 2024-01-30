@class _KSFileEntry, NSDate;

@interface _KSUserWordsInfo : NSObject {
    NSDate *_modifiedDate;
    unsigned long long _size;
    _KSFileEntry *_file;
}

+ (id)keyboardDirectory;
+ (id)keyNamesExcludingData;
+ (id)keyForData;
+ (id)filesForLanguage:(id)a0;
+ (id)infoWithFiles:(id)a0;
+ (id)infoWithRecord:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRecord:(id)a0;
- (BOOL)isBetterThan:(id)a0;
- (id)initWithFiles:(id)a0;
- (void)saveToRecord:(id)a0;

@end
