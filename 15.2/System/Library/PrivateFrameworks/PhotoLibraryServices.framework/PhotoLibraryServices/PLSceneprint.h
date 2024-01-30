@class NSData, PLAdditionalAssetAttributes;

@interface PLSceneprint : PLManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) PLAdditionalAssetAttributes *additionalAssetAttributes;

+ (id)entityName;

@end
