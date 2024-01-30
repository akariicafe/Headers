@class NSString, NSData;

@interface _PLLazyPreheatData : NSData {
    NSString *_path;
    NSData *_data;
}

+ (id)dataWithContentsOfFile:(id)a0;

- (const void *)bytes;
- (unsigned long long)length;
- (id)initWithContentsOfFile:(id)a0;
- (void).cxx_destruct;
- (void)_loadData;

@end
