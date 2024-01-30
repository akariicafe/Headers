@class NSData;
@protocol SFPseudoRandomFunction;

@interface SFPBKDF2Operation_Ivars : NSObject {
    long long iterationCount;
    id<SFPseudoRandomFunction> pseudoRandomFunction;
    NSData *salt;
}

- (void).cxx_destruct;

@end
