@class NSString;

@interface APPCBannerRepresentation : APPCContentRepresentation {
    void /* unknown type, empty encoding */ adTag;
}

@property (nonatomic, readonly) NSString *adTag;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ adamIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ appAdTemplateType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ outstreamVideoInfo;

- (id)initWithIdentifier:(id)a0 adType:(long long)a1 desiredPosition:(long long)a2 privacyMarkerPosition:(long long)a3 adSize:(struct CGSize { double x0; double x1; })a4 tapAction:(id)a5 adTag:(id)a6 outstreamVideoInfo:(id)a7 adamIdentifier:(id)a8 tapActionTemplateType:(long long)a9 adPolicyData:(id)a10;
- (void).cxx_destruct;

@end
