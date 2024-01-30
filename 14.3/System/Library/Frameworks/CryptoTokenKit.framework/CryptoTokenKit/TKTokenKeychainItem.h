@class TKTokenID, NSMutableDictionary, NSDictionary, NSData, NSString;

@interface TKTokenKeychainItem : NSObject {
    NSData *_accessControl;
}

@property (class, readonly) NSDictionary *operationMap;

@property (readonly, copy) NSMutableDictionary *keychainAttributes;
@property (readonly, copy) NSData *encodedObjectID;
@property (retain) TKTokenID *tokenID;
@property (retain) NSData *accessControl;
@property (readonly, copy) id objectID;
@property (copy) NSString *label;
@property (copy) NSDictionary *constraints;

+ (id)accessControlForConstraints:(id)a0 tokenID:(id)a1 error:(id *)a2;
+ (id)keychainItemWithInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithItemInfo:(id)a0;
- (id)keychainAttributes;
- (id)description;
- (id)initWithObjectID:(id)a0;

@end
