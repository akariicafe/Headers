@class NSData, NSUUID;

@interface ISStoreUnit : NSObject

@property (readonly) NSData *data;
@property (readonly) NSUUID *UUID;

+ (id)storeUnitWithData:(id)a0;
+ (id)storeUnitWithStoreURL:(id)a0 UUID:(id)a1;

- (void)remapWithStoreURL:(id)a0;
- (BOOL)isValid;
- (id)initWithData:(id)a0 UUID:(id)a1;
- (void).cxx_destruct;

@end
