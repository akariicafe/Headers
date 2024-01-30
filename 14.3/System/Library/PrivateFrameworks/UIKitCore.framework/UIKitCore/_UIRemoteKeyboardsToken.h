@class NSString;

@interface _UIRemoteKeyboardsToken : NSObject {
    int _identifier;
}

@property (copy, nonatomic) NSString *sceneIdentityString;

+ (id)uniqueToken;

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
