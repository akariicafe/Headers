@class NSData;

@interface CryptoKitPrivate.TDMServerEvaluation : NSObject {
    void /* unknown type, empty encoding */ proof;
    void /* unknown type, empty encoding */ evaluatedElement;
}

@property (nonatomic, readonly) NSData *proof;
@property (nonatomic, readonly) NSData *evaluatedElement;

- (id)init;
- (void).cxx_destruct;

@end
