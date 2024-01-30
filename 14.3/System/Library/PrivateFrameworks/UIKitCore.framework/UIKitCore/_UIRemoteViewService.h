@class NSUUID, NSExtension;
@protocol PKPlugIn;

@interface _UIRemoteViewService : NSObject

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) id<PKPlugIn> plugin;
@property (readonly, nonatomic) BOOL overridesHostAppearance;
@property (copy, nonatomic) NSUUID *contextToken;

- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 andContextToken:(id)a1;
- (void)updateOverridesHostAppearance;
- (id)initWithPlugIn:(id)a0 andContextToken:(id)a1;

@end
