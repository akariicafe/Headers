@class NSString;

@interface _UIRemoteKeyboardsToken : NSObject {
    int _identifier;
}

@property (copy, nonatomic) NSString *sceneIdentityString;

+ (id)uniqueToken;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)dealloc;

@end
