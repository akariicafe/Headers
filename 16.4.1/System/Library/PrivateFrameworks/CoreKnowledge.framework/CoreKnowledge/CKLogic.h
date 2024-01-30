@class NSString;

@interface CKLogic : NSObject {
    void /* unknown type, empty encoding */ body;
    void /* unknown type, empty encoding */ negatedBody;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *identifier;

+ (id)ifExistsLink:(id)a0 to:(id)a1;
+ (id)ifNotExistsLink:(id)a0 to:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)and:(id)a0;
- (id)andExistsLink:(id)a0 to:(id)a1 error:(id *)a2;
- (id)andNotExistsLink:(id)a0 to:(id)a1 error:(id *)a2;

@end
