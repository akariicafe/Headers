@class NSString;

@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <NSCopying> {
    NSString *_URLPath;
    NSString *_mimeType;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
