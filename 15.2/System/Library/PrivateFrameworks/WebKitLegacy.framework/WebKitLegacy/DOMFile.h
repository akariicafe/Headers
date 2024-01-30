@class NSString;

@interface DOMFile : DOMBlob

@property (readonly, copy) NSString *name;

- (long long)lastModified;

@end
