@class NSString, NSNumber;

@interface DOCTag : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long labelIndex;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long itemCount;
@property (readonly, nonatomic) NSNumber *sidebarVisible;
@property (readonly, nonatomic) NSNumber *sidebarPinned;

+ (id)untitledTagForRendering:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToTag:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDisplayName:(id)a0 labelIndex:(long long)a1 type:(long long)a2;
- (void)mergeWithTag:(id)a0 options:(long long)a1;
- (id)initWithICloudTagAttributes:(id)a0;
- (id)iCloudTagAttributes;
- (id)initWithDisplayName:(id)a0 labelIndex:(long long)a1 type:(long long)a2 itemCount:(long long)a3 sidebarVisible:(id)a4 sidebarPinned:(id)a5;

@end
