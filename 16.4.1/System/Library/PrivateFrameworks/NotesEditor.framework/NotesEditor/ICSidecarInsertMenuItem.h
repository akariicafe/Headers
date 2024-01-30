@class NSString, NSData;

@interface ICSidecarInsertMenuItem : NSObject {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ data;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSData *data;

- (id)initWithType:(id)a0 data:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
