@class NSString, CTTelephonyNetworkInfo;

@interface CTRadioAccessTechnology : NSObject {
    CTTelephonyNetworkInfo *_networkInfo;
}

@property (readonly) NSString *radioAccessTechnology;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCTTelephonyNetworkInfo:(id)a0;

@end
