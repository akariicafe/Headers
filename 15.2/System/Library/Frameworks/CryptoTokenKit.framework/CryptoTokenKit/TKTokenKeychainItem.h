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

+ (id)keychainItemWithInfo:(id)a0;
+ (id)accessControlForConstraints:(id)a0 tokenID:(id)a1 error:(id *)a2;

- (id)keychainAttributes;
- (id)description;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0;
- (id)initWithItemInfo:(id)a0;

@end
