@class NSString;

@interface TSPDocumentResourceLegacyInfo : NSObject <NSCopying> {
    NSString *_digestString;
    NSString *_locator;
}

@property (readonly, copy) NSString *digestString;
@property (readonly, copy) NSString *locator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDigestString:(id)a0 locator:(id)a1;
- (BOOL)isEqualToDocumentResourceLegacyInfo:(id)a0;

@end
