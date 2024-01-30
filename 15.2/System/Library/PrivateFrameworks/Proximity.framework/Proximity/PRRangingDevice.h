@class NSDictionary;

@interface PRRangingDevice : NSObject {
    NSDictionary *_clientInfo;
}

@property (readonly, copy) NSDictionary *clientInfo;

+ (BOOL)isSupported;

- (void).cxx_destruct;
- (id)init;

@end
