@class NSString;

@interface NSEncodingDetectionPlaceholder : NSObject {
    unsigned long long nsEncoding;
    unsigned int cfEncoding;
    NSString *string;
    char *bytes;
    unsigned long long bytesLength;
    char *bytesStart;
}

@property (readonly) unsigned long long nsEncoding;
@property (readonly) unsigned int cfEncoding;
@property (readonly) NSString *string;
@property (readonly) char *bytes;
@property (readonly) unsigned long long bytesLength;

+ (id)placeholderForDetector:(id)a0;

- (id)debugDescription;
- (void)dealloc;

@end
