@class NSString, NSNumber;
@protocol AMSBagProtocol;

@interface ASDMediaClipTaskURLBuilder : NSObject {
    NSString *_bundleID;
    id<AMSBagProtocol> _bag;
    NSNumber *_externalVersionID;
}

- (void).cxx_destruct;

@end
