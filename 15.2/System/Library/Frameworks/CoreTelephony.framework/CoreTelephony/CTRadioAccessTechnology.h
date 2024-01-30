@class NSString, CTTelephonyNetworkInfo;

@interface CTRadioAccessTechnology : NSObject {
    CTTelephonyNetworkInfo *_networkInfo;
}

@property (readonly) NSString *radioAccessTechnology;

- (id)initWithCTTelephonyNetworkInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
