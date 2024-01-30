@class NSString, NSDictionary, NSData, NSArray;

@interface CRKAirDropTransferInfo : NSObject

@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (nonatomic) BOOL autoAccept;
@property (nonatomic) BOOL hideProgress;
@property (copy, nonatomic) NSString *senderName;
@property (copy, nonatomic) NSData *previewImageData;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *files;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;
@property (copy, nonatomic) NSString *itemsDescription;

- (void).cxx_destruct;
- (void)addItems:(id)a0;
- (id)description;
- (void)addFiles:(id)a0;

@end
