@class NSString, TKTokenConfiguration, NSDictionary, NSArray;

@interface TKTokenKeychainContents : NSObject {
    NSArray *_items;
}

@property (readonly) TKTokenConfiguration *configuration;
@property (readonly) NSString *tokenID;
@property (readonly, copy) NSDictionary *keys;
@property (readonly, copy) NSDictionary *certificates;
@property (readonly, copy) NSArray *items;

- (id)initWithTokenID:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)certificateForKey:(id)a0;
- (id)certificateForObjectID:(id)a0 error:(id *)a1;
- (void)fillWithItems:(id)a0;
- (id)keyForObjectID:(id)a0 error:(id *)a1;

@end
