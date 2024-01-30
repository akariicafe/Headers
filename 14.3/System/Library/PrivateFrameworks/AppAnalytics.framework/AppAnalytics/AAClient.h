@class NSString;

@interface AAClient : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ buildNumber;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ build;
@property (nonatomic, readonly) NSString *buildNumber;
@property (nonatomic, readonly) NSString *fullVersion;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 name:(id)a1 version:(id)a2 build:(long long)a3;
- (id)initWithIdentifier:(id)a0 name:(id)a1 version:(id)a2 buildNumber:(id)a3;
- (id)initWithBundle:(id)a0;

@end
