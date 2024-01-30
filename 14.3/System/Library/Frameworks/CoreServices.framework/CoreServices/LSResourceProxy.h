@class NSString, NSDictionary, _LSBoundIconInfo;
@protocol LSIconResourceLocator;

@interface LSResourceProxy : _LSQueryResult <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setLocalizedName:) NSString *localizedName;
@property (retain, nonatomic, setter=_setBoundIconInfo:) _LSBoundIconInfo *_boundIconInfo;
@property (readonly, nonatomic) id<LSIconResourceLocator> iconResourceLocator;
@property (readonly, nonatomic) BOOL boundIconIsBadge;
@property (readonly, nonatomic) NSDictionary *iconsDictionary;
@property (readonly, nonatomic) NSString *primaryIconName;
@property (nonatomic) unsigned long long propertyListCachingStrategy;

- (id)iconDataForStyle:(id)a0 width:(long long)a1 height:(long long)a2 options:(unsigned long long)a3;
- (id)iconDataForVariant:(int)a0;
- (id)_privateDocumentFileNamesAsCacheKey;
- (id)_initWithLocalizedName:(id)a0;
- (id)iconDataForVariant:(int)a0 withOptions:(int)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (void)encodeWithCoder:(id)a0;

@end
