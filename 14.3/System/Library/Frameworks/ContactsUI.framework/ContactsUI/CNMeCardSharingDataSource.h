@interface CNMeCardSharingDataSource : NSObject

@property (nonatomic) unsigned long long meCardSharingStatus;

+ (id)localizedStringForMeCardSharingStatus:(unsigned long long)a0;

- (id)init;
- (id)localizedStringForMeCardSharingStatus;

@end
