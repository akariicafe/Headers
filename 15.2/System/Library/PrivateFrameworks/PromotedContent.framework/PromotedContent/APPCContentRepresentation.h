@class NSString;

@interface APPCContentRepresentation : NSObject <APPCPromotableContentRepresentation> {
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ adType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ desiredPosition;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ privacyMarkerPosition;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ adSize;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ tapAction;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ adPolicyData;

- (void).cxx_destruct;
- (id)init;
- (void)performActionWithCompletion:(id /* block */)a0;

@end
