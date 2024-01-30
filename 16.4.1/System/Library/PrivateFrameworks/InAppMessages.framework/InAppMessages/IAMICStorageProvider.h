@protocol IAMMessageMetadataStorage, IAMMessageEntryProvider, IAMPropertyStorage;

@interface IAMICStorageProvider : NSObject

@property (readonly, nonatomic) id<IAMMessageEntryProvider> messageEntryProvider;
@property (readonly, nonatomic) id<IAMMessageMetadataStorage> messageMetadataStorage;
@property (readonly, nonatomic) id<IAMPropertyStorage> propertyStorage;

- (void).cxx_destruct;

@end
