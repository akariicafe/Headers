@class NSUUID, NSString;

@interface TranslationUI.VisualTranslationResult : NSObject <TranslationUI.LTUIVisualTranslationResultProtocol> {
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ string;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isPassthrough;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ topLeft;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ topRight;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ bottomLeft;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ bottomRight;

- (id)init;
- (void).cxx_destruct;

@end
