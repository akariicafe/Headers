@class SABinary;

@interface SABinaryToSymbolicate : NSObject {
    int _livePid;
    SABinary *_binary;
    unsigned long long _dataGatheringOptions;
}

- (void).cxx_destruct;

@end
