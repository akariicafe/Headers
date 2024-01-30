@class NSData, PLAdditionalAssetAttributes;

@interface PLSceneprint : PLManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) PLAdditionalAssetAttributes *additionalAttributes;

+ (id)entityName;

@end
