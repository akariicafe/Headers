@class NSData;

@interface KCJoiningMessage : NSObject

@property (readonly) int type;
@property (readonly) NSData *firstData;
@property (readonly) NSData *secondData;
@property (readonly) NSData *der;

+ (id)encodeToDERType:(int)a0 data:(id)a1 payload:(id)a2 error:(id *)a3;
+ (unsigned long long)encodedSizeType:(int)a0 data:(id)a1 payload:(id)a2 error:(id *)a3;
+ (id)messageWithDER:(id)a0 error:(id *)a1;
+ (id)messageWithType:(int)a0 data:(id)a1 error:(id *)a2;
+ (id)messageWithType:(int)a0 data:(id)a1 payload:(id)a2 error:(id *)a3;
+ (id)messageWithType:(int)a0 data:(id)a1 secondData:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)inflatePartsOfEncoding:(id *)a0;
- (id)initWithDER:(id)a0 error:(id *)a1;
- (id)initWithType:(int)a0 data:(id)a1 payload:(id)a2 error:(id *)a3;

@end
