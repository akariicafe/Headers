@class NSData, NSUUID;

@interface ISStoreUnit : NSObject

@property (readonly) NSData *data;
@property (readonly) NSUUID *UUID;

+ (id)storeUnitWithStoreURL:(id)a0 UUID:(id)a1;
+ (id)storeUnitWithData:(id)a0;

- (id)initWithData:(id)a0 UUID:(id)a1;
- (void).cxx_destruct;
- (void)remapWithStoreURL:(id)a0;
- (BOOL)isValid;

@end
