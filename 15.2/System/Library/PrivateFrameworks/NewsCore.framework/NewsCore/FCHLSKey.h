@class NSURL, NSString;

@interface FCHLSKey : NSObject {
    long long _method;
    NSURL *_url;
    NSString *_keyFormat;
    NSString *_keyFormatVersions;
    NSString *_iv;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
