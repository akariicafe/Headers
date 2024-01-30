@class NSString;

@interface AAProcessEvent : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ groupName;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ json;
@property (nonatomic, readonly) NSString *groupName;

- (void).cxx_destruct;
- (id)init;

@end
