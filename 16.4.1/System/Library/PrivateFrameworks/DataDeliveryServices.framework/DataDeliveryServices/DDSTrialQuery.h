@class NSString;

@interface DDSTrialQuery : NSObject <NSSecureCoding, NSCopying> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) int projectId;
@property (readonly) unsigned int namespaceId;

+ (id)defaultQuery;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithProjectId:(int)a0 namespaceId:(unsigned int)a1;

@end
