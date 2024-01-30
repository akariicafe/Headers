@interface GEOUserAccountInfo : NSObject

+ (id)primaryICloudAccount;
+ (BOOL)_isPrimaryAccountUnderage:(id)a0;
+ (BOOL)isCurrentICloudAccountUnderage;
+ (BOOL)hasValidICloudAccountForAddingRatingsAndPhotos;

@end
