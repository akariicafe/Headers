@class NSString, NSData;

@interface IMNicknameEncryptionTag : NSObject

@property (readonly, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) NSData *dataRepresentation;

+ (id)_tagWithDataRepresentation:(id)a0 length:(unsigned long long)a1 error:(id *)a2;
+ (id)_tagWithStringRepresentation:(id)a0 length:(unsigned long long)a1 error:(id *)a2;

- (void)dealloc;
- (id)initWithDataRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTag:(id)a0 error:(id *)a1;

@end
