@class NSString;

@interface ECSubject : NSObject <NSCopying, NSSecureCoding, EFPubliclyDescribable> {
    long long _hasReplyPrefixState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *subjectWithoutPrefix;
@property (copy, nonatomic) NSString *prefix;
@property (readonly, copy, nonatomic) NSString *subjectString;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly, nonatomic) unsigned long long prefixLength;
@property (readonly, nonatomic) BOOL hasPrefix;
@property (readonly, nonatomic) BOOL hasReplyPrefix;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)subjectWithString:(id)a0;
+ (id)_prefixTruncatedToMaximumAllowableSize:(id)a0;
+ (id)_uniqueString:(id)a0 type:(long long)a1;
+ (id)_subjectTruncatedToMaximumAllowableSize:(id)a0;

- (BOOL)isEqualToString:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPrefix:(id)a0 subjectWithoutPrefix:(id)a1;
- (BOOL)isEqualToSubjectIgnoringPrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSubject:(id)a0;

@end
