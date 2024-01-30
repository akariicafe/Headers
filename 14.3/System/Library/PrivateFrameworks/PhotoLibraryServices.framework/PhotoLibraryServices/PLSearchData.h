@class NSData, PLManagedAsset;

@interface PLSearchData : PLManagedObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL valid;
@property (retain, nonatomic) PLManagedAsset *asset;

+ (id)entityName;

@end
