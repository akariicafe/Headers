@class NSString;

@interface FCForYouGroupConfiguration : NSObject <NSCopying>

@property (nonatomic) long long groupType;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL allowsNativeAds;
@property (nonatomic) unsigned long long groupPosition;
@property (nonatomic) unsigned long long precedingGroupsCount;
@property (nonatomic) unsigned long long precedingGroupsCountForFirstGroup;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithGroupPosition:(unsigned long long)a0 precedingGroupsCount:(unsigned long long)a1 precedingGroupsCountForFirstGroup:(unsigned long long)a2;
- (long long)compareGroupPosition:(id)a0;

@end
