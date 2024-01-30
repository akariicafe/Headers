@class NSString, VUIImageInfoManagedObject;

@interface VUISidebandMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>

@property (nonatomic) unsigned long long imageTypeInternal;
@property (retain, nonatomic) NSString *imageIdentifierInternal;
@property (retain, nonatomic) VUIImageInfoManagedObject *imageInfo;
@property (readonly, nonatomic) unsigned long long imageType;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
