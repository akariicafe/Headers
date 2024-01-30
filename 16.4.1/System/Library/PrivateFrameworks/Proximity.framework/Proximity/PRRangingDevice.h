@class NSDictionary;

@interface PRRangingDevice : NSObject {
    NSDictionary *_clientInfo;
}

@property (readonly, copy) NSDictionary *clientInfo;

+ (BOOL)isSupported;

- (id)init;
- (void).cxx_destruct;

@end
