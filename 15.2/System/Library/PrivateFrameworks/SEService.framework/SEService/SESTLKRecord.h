@class NSString, NSData;

@interface SESTLKRecord : NSObject

@property (readonly) NSString *view;
@property (readonly) NSData *tlkUUID;
@property (readonly) NSData *parentTLKUUID;
@property (readonly) NSData *recordData;

+ (id)withView:(id)a0 tlkUUID:(id)a1 parentTLKUUID:(id)a2 recordData:(id)a3;
+ (id)withCKKSExternalKey:(id)a0;

- (void).cxx_destruct;
- (id)asCKKSExternalKey;

@end
