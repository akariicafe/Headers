@class NSData, UARPAssetID;

@interface UARPAsset : NSObject

@property (readonly) UARPAssetID *id;
@property (readonly) NSData *data;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithID:(id)a0;
- (id)initWithID:(id)a0 withBuffer:(id)a1;

@end
