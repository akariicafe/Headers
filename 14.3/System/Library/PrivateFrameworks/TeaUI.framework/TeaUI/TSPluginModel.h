@class NSString;

@interface TSPluginModel : NSObject {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ revision;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ size;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ viewController;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;

@end
