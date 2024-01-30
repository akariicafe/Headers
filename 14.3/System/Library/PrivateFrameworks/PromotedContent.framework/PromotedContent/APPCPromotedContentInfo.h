@class NSString, APPCNativeRepresentation;

@interface APPCPromotedContentInfo : NSObject {
    void /* unknown type, empty encoding */ promotedContent;
    void /* unknown type, empty encoding */ ready;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ metricsHelper;
@property (nonatomic, readonly) id /* block */ ready;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) APPCNativeRepresentation *nativeInfo;
@property (nonatomic, readonly) long long desiredPosition;
@property (nonatomic, readonly) long long errorReason;
@property (nonatomic) void /* unknown type, empty encoding */ unfilledReason;
@property (nonatomic) void /* unknown type, empty encoding */ placeholder;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
