@class NSString;

@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <NSCopying> {
    NSString *_URLPath;
    NSString *_mimeType;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
